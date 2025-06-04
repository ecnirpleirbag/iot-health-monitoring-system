import serial
import time

port = 'COM3'  # Adjust based on your system
baud = 9600

def monitor_serial():
    try:
        with serial.Serial(port, baud, timeout=1) as ser:
            print(f"Connected to {port}")
            while True:
                if ser.in_waiting:
                    line = ser.readline().decode('utf-8').strip()
                    print(f"> {line}")
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    monitor_serial()
