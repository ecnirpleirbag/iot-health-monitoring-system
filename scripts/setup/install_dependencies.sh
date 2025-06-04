#!/bin/bash

echo "📦 Installing global dependencies..."

# Arduino CLI setup
if ! command -v arduino-cli &> /dev/null; then
  echo "🔧 Installing Arduino CLI..."
  curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
  mv bin/arduino-cli /usr/local/bin/
fi

# Python packages
echo "🐍 Installing Python
