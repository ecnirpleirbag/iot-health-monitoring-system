# Installation Guide

## Hardware Setup

- Connect sensors to ESP32 as per the circuit diagram.
- Power via USB or 3.3V regulated supply.

## Software Setup

1. Install Arduino IDE
2. Install ESP32 Board via Board Manager
3. Install required libraries:
    - `DHT sensor library`
    - `Adafruit Unified Sensor`
    - `WiFi.h`, `HTTPClient.h`

4. Upload `main_processing.ino` to ESP32

## Mobile App

- Install the APK or clone from repo
- Connect to cloud API endpoint in settings
