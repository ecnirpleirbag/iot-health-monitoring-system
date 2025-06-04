import psutil
import time

def monitor():
    print("Monitoring System Performance...")
    while True:
        cpu = psutil.cpu_percent()
        mem = psutil.virtual_memory().percent
        print(f"CPU: {cpu}% | Memory: {mem}%")
        time.sleep(2)

if __name__ == "__main__":
    monitor()
