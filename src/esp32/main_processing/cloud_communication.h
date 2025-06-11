#ifndef CLOUD_COMMUNICATION_H
#define CLOUD_COMMUNICATION_H

#include <WiFi.h>
#include <HTTPClient.h>

void connectToWiFi();
void uploadData(float temperature, int heartRate, float systolic, float diastolic);

#endif
