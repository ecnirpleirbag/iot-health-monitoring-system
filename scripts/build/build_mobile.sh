#!/bin/bash

echo "📱 Building Flutter mobile app..."

cd mobile_app

flutter pub get

flutter build apk --release

if [ $? -eq 0 ]; then
  echo "✅ Mobile app built successfully."
else
  echo "❌ Flutter build failed."
  exit 1
fi
