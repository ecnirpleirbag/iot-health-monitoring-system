#!/bin/bash

echo "🧪 Running unit tests (Python)..."

mkdir -p test_results

pytest tests/unit/ > test_results/unit_test.log

if [ $? -eq 0 ]; then
  echo "✅ Unit tests passed."
else
  echo "❌ Some unit tests failed. See test_results/unit_test.log"
fi
