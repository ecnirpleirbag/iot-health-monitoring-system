// Code need to be upload by Gabriel
#ifndef COMM_PROTOCOL_H
#define COMM_PROTOCOL_H

#include "data_structures.h"
#include <ArduinoJson.h>

SensorData parseSensorJson(String json) {
	DynamicJsonDocument doc(256);
	deserializeJson(doc, json);
	SensorData data;
	data.heartRateRaw = doc["heart_rate_raw"];
	data.temperatureCelsius = doc["temperature_celsius"];
	data.fallDetected = doc["fall_detected"];
	return data;
}

String formatSensorDataToJson(SensorData data) {
	DynamicJsonDocument doc(256);
	doc["heart_rate_raw"] = data.heartRateRaw;
	doc["temperature_celsius"] = data.temperatureCelsius;
	doc["fall_detected"] = data.fallDetected;
	doc["systolic_bp"] = data.systolicBP;
	doc["diastolic_bp"] = data.diastolicBP;
	String output;
	serializeJson(doc, output);
	return output;
}

#endif
