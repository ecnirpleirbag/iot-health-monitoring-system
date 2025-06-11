#include "config.h"
#include "sensor_definitions.h"

DHT dht(DHT_PIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  setupSensors();
}

void loop() {
  float temp = readTemperature();
  int hr = readHeartRate();
  float ecg = readECGSignal();

  Serial.print("Temp: "); Serial.print(temp); Serial.print(" *C, ");
  Serial.print("Heart Rate: "); Serial.print(hr); Serial.print(" bpm, ");
  Serial.print("ECG: "); Serial.println(ecg);

  delay(SENSOR_UPDATE_INTERVAL);
}
