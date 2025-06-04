#include <Wire.h>
#include <Adafruit_MPU6050.h>

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  if (!mpu.begin()) {
    Serial.println("MPU6050 init failed!");
    while (1);
  }
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  Serial.printf("Accel: %.2f, %.2f, %.2f\n", a.acceleration.x, a.acceleration.y, a.acceleration.z);
  delay(1000);
}
