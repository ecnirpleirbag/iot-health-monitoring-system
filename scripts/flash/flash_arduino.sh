#!/bin/bash

echo "🔌 Flashing Arduino UNO..."

PORT=$(arduino-cli board list | grep "arduino:avr:uno" | awk '{print $1}')

if [ -z "$PORT" ]; then
  echo "❌ Arduino UNO not found. Make sure it's connected."
  exit 1
fi

arduino-cli upload -p $PORT --fqbn arduino:avr:uno arduino/uno_main

if [ $? -eq 0 ]; then
  echo "✅ Successfully flashed Arduino UNO on $PORT"
else
  echo "❌ Flash failed for Arduino UNO."
  exit 1
fi
