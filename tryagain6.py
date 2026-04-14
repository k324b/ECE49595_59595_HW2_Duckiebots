#!/usr/bin/env python3
import time
import numpy as np
import speech_recognition as sr
from faster_whisper import WhisperModel
import roslibpy

# -----------------------------
# Connect to Duckiebot rosbridge
# -----------------------------
client = roslibpy.Ros(host='entebot208.local', port=9001)
client.run()

print(f"Connected: {client.is_connected}")

topic = roslibpy.Topic(
    client,
    '/entebot208/car_cmd_switch_node/cmd',
    'duckietown_msgs/Twist2DStamped'
)

# -----------------------------
# Whisper STT
# -----------------------------
print("Loading Whisper model...")
stt = WhisperModel("tiny.en", compute_type="int8")
print("Whisper loaded!")

# -----------------------------
# Detect command
# -----------------------------
def normalize(text):
    return text.lower().strip()

def detect(text):
    text = normalize(text)
    if "forward" in text: return "forward"
    if "backward" in text: return "backward"
    if "left" in text: return "left"
    if "right" in text: return "right"
    if "stop" in text or "halt" in text: return "stop"
    return None

def send_command(command):
    v, omega = 0.0, 0.0
    if command == "forward":    v = 0.3
    elif command == "backward": v = -0.3
    elif command == "left":     v, omega = 0.2, 2.0
    elif command == "right":    v, omega = 0.2, -2.0
    elif command == "stop":     v, omega = 0.0, 0.0

    topic.publish(roslibpy.Message({
        'header': {'stamp': {'secs': 0, 'nsecs': 0}, 'frame_id': ''},
        'v': float(v),
        'omega': float(omega)
    }))
    print(f"Command: {command} | v={v}, omega={omega}")

# -----------------------------
# Setup microphone (pulse works best in VirtualBox)
# -----------------------------
recognizer = sr.Recognizer()
recognizer.energy_threshold = 300
recognizer.dynamic_energy_threshold = True

# Find pulse device index
mic_index = None
for i, name in enumerate(sr.Microphone.list_microphone_names()):
    if 'pulse' in name.lower():
        mic_index = i
        print(f"Using mic: {name} (index {i})")
        break

if mic_index is None:
    print("Pulse not found, using default mic")

mic = sr.Microphone(device_index=mic_index)

# Calibrate
print("Calibrating microphone...")
with mic as source:
    recognizer.adjust_for_ambient_noise(source, duration=1.0)
print("Calibration done!")

# -----------------------------
# Main loop - voice input
# -----------------------------
print("\nReady! Speak commands: forward, backward, left, right, stop")
print("Press Ctrl+C to quit\n")

try:
    while client.is_connected:
        try:
            print("Listening...")
            with mic as source:
                audio = recognizer.listen(source, timeout=5.0, phrase_time_limit=3.0)

            # Transcribe
            audio_data = audio.get_raw_data(convert_rate=16000, convert_width=2)
            audio_np = (
                np.frombuffer(audio_data, dtype=np.int16)
                .astype(np.float32) / 32768.0
            )

            segments, _ = stt.transcribe(audio_np)
            text = " ".join(s.text for s in segments).strip()

            if not text:
                print("Didn't catch that, try again.")
                continue

            print(f"Heard: {text}")
            command = detect(text)

            if command:
                send_command(command)
                time.sleep(0.2)
            else:
                print("No command detected, try again.")

        except sr.WaitTimeoutError:
            print("Timeout, listening again...")
        except Exception as e:
            print(f"Error: {e}")

except KeyboardInterrupt:
    print("\nShutting down...")
    send_command("stop")

finally:
    topic.unadvertise()
    client.terminate()
    print("Disconnected.")
