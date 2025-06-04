void setup() {
  Serial.begin(9600);
  Serial.println("Starting Sensor Calibration");
}

void loop() {
  float raw_value = analogRead(A0);
  float calibrated_value = (raw_value * 5.0 / 1023.0); // Basic linear calibration
  Serial.print("Raw: ");
  Serial.print(raw_value);
  Serial.print(" | Calibrated: ");
  Serial.println(calibrated_value);
  delay(1000);
}
