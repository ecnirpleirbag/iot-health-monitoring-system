#ifndef CONFIG_H
#define CONFIG_H

#define SENSOR_UPDATE_INTERVAL 1000 // in ms

// Pins for sensors
#define DHT_PIN 2
#define ECG_PIN A0
#define PPG_PIN A1

// I2C for MAX30102 or other sensors
#define I2C_SDA 21
#define I2C_SCL 22

#endif
