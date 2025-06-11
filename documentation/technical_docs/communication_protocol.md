# Communication Protocol

## 1. Device-to-ESP32 (Sensor Layer)
- **DHT11**: GPIO Digital
- **MAX30102**: I2C Protocol
- **ECG Module**: Analog Read

## 2. ESP32-to-Cloud
- **Protocol**: HTTP POST
- **Format**: JSON
- **Headers**:
Content-Type: application/json
Device-ID: ESP32_HEALTH_MONITOR

- **Example Payload**:
```json
{
  "device_id": "ESP32_HEALTH_MONITOR",
  "temperature": 36.5,
  "heart_rate": 75,
  "systolic": 120,
  "diastolic": 80,
  "timestamp": "2025-06-11T10:00:00Z"
}
