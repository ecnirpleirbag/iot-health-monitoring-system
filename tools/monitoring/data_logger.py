import csv
import json
from datetime import datetime

def log_data(json_data, file="sensor_log.csv"):
    data = json.loads(json_data)
    data["timestamp"] = datetime.now().isoformat()
    with open(file, mode='a', newline='') as f:
        writer = csv.DictWriter(f, fieldnames=data.keys())
        if f.tell() == 0:
            writer.writeheader()
        writer.writerow(data)

# Example usage
if __name__ == "__main__":
    sample = '{"heart_rate": 75, "temperature": 36.8, "systolic": 120, "diastolic": 80}'
    log_data(sample)
