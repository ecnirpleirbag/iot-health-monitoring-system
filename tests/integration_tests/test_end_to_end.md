# Integration Test: End-to-End Data Flow

**Objective:**  
Ensure complete pipeline from ESP32 to Cloud to Mobile UI works as expected.

**Flow:**
ESP32 → API Server → Database → Mobile App

**Test Conditions:**
- Push data from ESP32 every 5s
- Confirm server logs and DB insertion
- Verify display on mobile app within 10s

**Expected Outcome:**  
- Valid data stored in DB  
- Reflected on app UI  
- Alerts if thresholds crossed  

**Result:**  
✅ Pass / ❌ Fail  
