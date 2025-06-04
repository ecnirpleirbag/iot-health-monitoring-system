#!/bin/bash

echo "📱 Running Flutter mobile widget & integration tests..."

mkdir -p test_results

cd mobile_app || { echo "❌ mobile_app directory not found."; exit 1; }

flutter test > ../scripts/test/test_results/mobile_test.log

if [ $? -eq 0 ]; then
  echo "✅ Mobile tests passed."
else
  echo "❌ Mobile tests failed. See test_results/mobile_test.log"
fi
