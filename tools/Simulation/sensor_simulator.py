import time
from data_generator import generate_data

def simulate_sensor():
    print("Starting virtual sensor...")
    while True:
        data = generate_data()
        print(f"Simulated: {data}")
        time.sleep(2)

if __name__ == "__main__":
    simulate_sensor()
