import json
import random
import time
from datetime import datetime

def generate_data():
    return {
        "timestamp": datetime.utcnow().isoformat(),
        "heart_rate": random.randint(60, 100),
        "temperature": round(random.uniform(36.2, 37.5), 1),
        "systolic": random.randint(110, 130),
        "diastolic": random.randint(70, 85)
    }

if __name__ == "__main__":
    while True:
        data = generate_data()
        print(json.dumps(data))
        time.sleep(1)
