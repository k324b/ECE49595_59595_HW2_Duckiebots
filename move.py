import requests

ROBOT = "entebot208.local"
#ROBOT = "172.20.10.8"
try:
    resp = requests.get(f"http://{ROBOT}/api/v1/")
    print("Response code:", resp.status_code)
    print("Response body:", resp.text)
except requests.exceptions.RequestException as e:
    print("Error:", e)
def move(v, omega):
    #url = f"http://{ROBOT}/api/v1/executor/wheels_driver/set_wheels_speed"
    #requests.post(url, json={"left": v - omega, "right": v + omega})
    url = f"http://{ROBOT}/api/v1/executor/wheels_driver/set_wheels_speed"
    payload = {"left": v - omega, "right": v + omega}
    try:
        resp = requests.post(url, json=payload, timeout=2)
        print("Payload sent:", payload)
        print("Response code:", resp.status_code)
        print("Response body:", resp.text)
    except requests.exceptions.RequestException as e:
        print("Error sending request:", e)

# Examples
move(0.5, 0)    # forward
move(-0.5, 0)   # backward
move(0, 0.5)    # turn left
move(0, -0.5)   # turn right
move(0, 0)      # stop
