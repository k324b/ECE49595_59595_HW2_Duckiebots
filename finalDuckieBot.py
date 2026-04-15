#!/usr/bin/env python3
import time
import threading
import numpy as np
import speech_recognition as sr
from faster_whisper import WhisperModel
import roslibpy


# connect to Duckiebot rosbridge
client = roslibpy.Ros(host='entebot208.local', port=9001)
client.run()

print(f"Connected: {client.is_connected}")

topic = roslibpy.Topic(
    client,
    '/entebot208/car_cmd_switch_node/cmd',
    'duckietown_msgs/Twist2DStamped'
)

# load Whisper for speech to text
print("Loading Whisper model...")
stt = WhisperModel("tiny.en", compute_type="int8")
print("Whisper loaded!")


# continuously sends command
current_v = 0.0
current_omega = 0.0
command_active = True

def continuous_command():
    while command_active:
        topic.publish(roslibpy.Message({
            'header': {'stamp': {'secs': 0, 'nsecs': 0}, 'frame_id': ''},
            'v': float(current_v),
            'omega': float(current_omega)
        }))
        time.sleep(0.1)  

command_thread = threading.Thread(target=continuous_command, daemon=True)
command_thread.start()

# detects commands
def normalize(text):
    return text.lower().strip()

def detect(text):
    text = normalize(text)
    if "forward" in text: return "forward"
    if "increase" in text: return "speed up"
    if "decrease" in text: return "slow down"
    if "backward" in text or "back" in text: return "backward"
    if "left" in text: return "left"
    if "square" in text: return "half left"
    if "right" in text: return "right"
    if "circle" in text: return "half right"
    if "stop" in text or "halt" in text: return "stop"
    return None

def send_command(command):
    global current_v, current_omega

    if command == "forward":
        print("Command: FORWARD")
        current_v = -0.3
        current_omega = 0.0

    elif command == "speed up":
        print("Command: SPEED UP")
        current_v = -0.5
        current_omega = 0.0

    elif command == "slow down":
        print("Command: SLOW DOWN")
        current_v = -0.1
        current_omega = 0.0

    elif command == "backward":
        print("Command: BACKWARD")
        current_v = 0.3
        current_omega = 0.0
        time.sleep(0.8)      
        current_v = 0.0
        current_omega = 0.0

    elif command == "left":
        print("Command: LEFT")
        current_v = 0.0
        current_omega = 3.0   # positive = left
        time.sleep(0.8)      
        current_v = 0.0
        current_omega = 0.0
        print("Turn complete.")

    elif command == "half left":
        print("Command: HALF LEFT")
        current_v = 0.0
        current_omega = 1.5   # positive = left
        time.sleep(0.8)      
        current_v = 0.0
        current_omega = 0.0
        print("Turn complete.")

    elif command == "right":
        print("Command: RIGHT")
        current_v = 0.0
        current_omega = -3.0  # negative = right
        time.sleep(0.8)      
        current_v = 0.0
        current_omega = 0.0
        print("Turn complete.")

    elif command == "half right":
        print("Command: HALF RIGHT")
        current_v = 0.0
        current_omega = -1.5   # positive = left
        time.sleep(0.8)      
        current_v = 0.0
        current_omega = 0.0
        print("Turn complete.")

    elif command == "stop":
        print("Command: STOP")
        current_v = 0.0
        current_omega = 0.0

# setup mic
recognizer = sr.Recognizer()
recognizer.energy_threshold = 300
recognizer.dynamic_energy_threshold = True

mic_index = None
for i, name in enumerate(sr.Microphone.list_microphone_names()):
    if 'pulse' in name.lower():
        mic_index = i
        print(f"Using mic: {name} (index {i})")
        break

if mic_index is None:
    print("Pulse not found, using default mic")

mic = sr.Microphone(device_index=mic_index)

print("Calibrating microphone...")
with mic as source:
    recognizer.adjust_for_ambient_noise(source, duration=1.0)
print("Calibration done!")

# main loop
print("\nReady! Speak: forward, backward, left, right, stop")
print("Press Ctrl+C to quit\n")

try:
    while client.is_connected:
        try:
            print("Listening...")
            with mic as source:
                audio = recognizer.listen(source, timeout=5.0, phrase_time_limit=3.0)

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
            else:
                print("No command detected, try again.")

        except sr.WaitTimeoutError:
            print("Timeout, listening again...")
        except Exception as e:
            print(f"Error: {e}")

except KeyboardInterrupt:
    print("\nShutting down...")
    current_v = 0.0
    current_omega = 0.0
    time.sleep(0.3)

finally:
    command_active = False
    topic.unadvertise()
    client.terminate()
    print("Disconnected.")
