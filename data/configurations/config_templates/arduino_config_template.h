#ifndef ARDUINO_CONFIG_H
#define ARDUINO_CONFIG_H

// WiFi credentials
#define WIFI_SSID "YOUR_SSID"
#define WIFI_PASSWORD "YOUR_PASSWORD"

// API server
#define API_SERVER "http://your.server.ip.address"
#define API_PORT 5000
#define API_ENDPOINT "/api/v1/submit"

// Sensor pins
#define ECG_PIN A0
#define TEMP_SENSOR_PIN A1
#define BUZZER_PIN 9

// Sampling intervals (milliseconds)
#define SAMPLE_INTERVAL 1000

#endif // ARDUINO_CONFIG_H
