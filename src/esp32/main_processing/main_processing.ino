#include "config.h"
#include "cloud_communication.h"
#include "blood_pressure.h"

void setup() {
  Serial.begin(115200);
  connectToWiFi();
}

void loop() {
  // Mock values (replace with actual reads)
  float temperature = 36.7;
  int heartRate = 75;
  unsigned long ecgTime = millis();  // Simulated
  delay(50);
  unsigned long ppgTime = millis();

  float ptt = calculatePTT(ecgTime, ppgTime);
  float systolic, diastolic;
  estimateBloodPressure(ptt, systolic, diastolic);

  Serial.printf("BP: %.1f/%.1f\n", systolic, diastolic);
  uploadData(temperature, heartRate, systolic, diastolic);

  delay(2000);
}
