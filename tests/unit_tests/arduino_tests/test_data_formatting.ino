void setup() {
  Serial.begin(9600);
}

void loop() {
  float hr = 78.5;
  float temp = 36.6;
  Serial.printf("HR:%.1f,TEMP:%.1f\n", hr, temp);
  delay(1000);
}
