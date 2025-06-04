void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop() {
  if (digitalRead(3) == LOW) {
    Serial.println("Fall Detected");
  }
  delay(500);
}
