#!/bin/bash

echo "📦 Compiling ESP32 sketch..."

arduino-cli compile --fqbn esp32:esp32:esp32dev arduino/esp32_main

if [ $? -eq 0 ]; then
  echo "✅ ESP32 sketch compiled successfully."
else
  echo "❌ Compilation failed for ESP32."
  exit 1
fi
