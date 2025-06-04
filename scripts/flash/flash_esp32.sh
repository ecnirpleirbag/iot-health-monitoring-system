#!/bin/bash

echo "🔌 Flashing ESP32..."

PORT=$(arduino-cli board list | grep "esp32:esp32" | awk '{print $1}')

if [ -z "$PORT" ]; then
  echo "❌ ESP32 not found. Make sure it's connected."
  exit 1
fi

arduino-cli upload -p $PORT --fqbn esp32:esp32:esp32dev arduino/esp32_main

if [ $? -eq 0 ]; then
  echo "✅ Successfully flashed ESP32 on $PORT"
else
  echo "❌ Flash failed for ESP32."
  exit 1
fi
