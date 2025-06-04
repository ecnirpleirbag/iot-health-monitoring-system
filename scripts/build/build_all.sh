#!/bin/bash

echo "🔧 Building all project components..."

bash ./scripts/build/compile_arduino.sh || { echo "❌ Arduino compilation failed"; exit 1; }
bash ./scripts/build/compile_esp32.sh || { echo "❌ ESP32 compilation failed"; exit 1; }
bash ./scripts/build/build_mobile.sh || { echo "❌ Mobile app build failed"; exit 1; }

echo "✅ All builds completed successfully."
