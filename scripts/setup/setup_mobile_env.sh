#!/bin/bash

echo "📱 Setting up Flutter mobile environment..."

cd mobile_app || { echo "❌ mobile_app directory not found."; exit 1; }

flutter pub get

flutter doctor

echo "✅ Flutter mobile app dependencies installed."
