#!/bin/bash

echo "🔗 Running integration tests (ESP32 <-> Python <-> Cloud)..."

mkdir -p test_results

# Example: run mock test or full system test using Python
python tests/integration/test_data_pipeline.py > test_results/integration_test.log

if [ $? -eq 0 ]; then
  echo "✅ Integration tests passed."
else
  echo "❌ Integration tests failed. See test_results/integration_test.log"
fi
