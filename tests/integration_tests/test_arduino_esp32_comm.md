# Integration Test: Arduino ↔ ESP32 Communication

**Objective:**  
Validate serial communication between Arduino and ESP32 for sensor data transfer.

**Steps:**
1. Upload sender sketch to Arduino.
2. Upload receiver sketch to ESP32.
3. Connect Arduino TX to ESP32 RX (with logic level shifting if needed).
4. Observe received data using Serial Monitor.

**Expected Outcome:**  
ESP32 should receive and correctly print structured data every second.

**Result:**  
✅ Pass / ❌ Fail  
