# Mobile API Documentation

## Endpoint: `/api/v1/vitals`

### GET `/api/v1/vitals?device_id=ESP32_HEALTH_MONITOR`

**Response:**
```json
[
  {
    "temperature": 36.7,
    "heart_rate": 75,
    "systolic": 120,
    "diastolic": 78,
    "timestamp": "2025-06-11T10:00:00Z"
  }
]
