void setup() {
  Serial.begin(115200);
}

void loop() {
  int ptt = 200; // dummy Pulse Transit Time in ms
  float bp = 0.5 * ptt + 80;
  Serial.printf("Estimated BP: %.2f\n", bp);
  delay(1000);
}
