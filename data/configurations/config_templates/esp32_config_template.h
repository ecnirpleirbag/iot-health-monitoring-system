#ifndef ESP32_CONFIG_H
#define ESP32_CONFIG_H

// WiFi credentials
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PASSWORD"

// API server URL
#define API_SERVER "http://your.server.ip.address"
#define API_PORT 5000
#define API_ENDPOINT "/api/v1/submit"

// Sensor pins
#define PPG_SENSOR_PIN 34
#define MPU6050_INT_PIN 35
#define BUZZER_PIN 25

// Sampling and upload intervals (milliseconds)
#define SAMPLE_INTERVAL 500
#define UPLOAD_INTERVAL 5000

#endif // ESP32_CONFIG_H
