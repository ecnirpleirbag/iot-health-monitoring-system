#!/bin/bash

echo "📦 Compiling Arduino UNO sketch..."

arduino-cli compile --fqbn arduino:avr:uno arduino/uno_main

if [ $? -eq 0 ]; then
  echo "✅ Arduino UNO sketch compiled successfully."
else
  echo "❌ Compilation failed for Arduino UNO."
  exit 1
fi
