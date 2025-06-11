#ifndef SENSOR_DEFINITIONS_H
#define SENSOR_DEFINITIONS_H

#include <DHT.h>

#define DHTTYPE DHT11

extern DHT dht;

void setupSensors();
float readTemperature();
int readHeartRate();
float readECGSignal();

#endif
