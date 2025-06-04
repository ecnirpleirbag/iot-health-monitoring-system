# Sensor Specifications

This document outlines the technical details of the key sensors used in our IoT Vital Signs Monitoring System.

---

## 1. **AD8232 ECG Sensor**
- **Purpose**: Measures electrical activity of the heart.
- **Operating Voltage**: 3.3V – 5V
- **Features**: Analog ECG signal output, integrated amplifier
- **Sampling Rate**: Up to 360 Hz (recommended)
- **Use**: Single-lead ECG

---

## 2. **MAX30100 Pulse Oximeter**
- **Purpose**: Measures heart rate and SpO2
- **Operating Voltage**: 1.8V (core), 3.3V (I/O)
- **Communication**: I2C
- **Accuracy**: ±2% for SpO2, ±3 bpm for heart rate
- **Sampling Rate**: 50–100 Hz

---

## 3. **MPU6050 (Accelerometer + Gyro)**
- **Purpose**: Detect motion, fall detection
- **Axes**: 6 DoF (3-axis accelerometer + 3-axis gyroscope)
- **Communication**: I2C
- **Operating Voltage**: 3V – 5V
- **Sampling Rate**: Up to 1kHz

---

## 4. **DS18B20 Digital Temperature Sensor**
- **Purpose**: Measures skin/body surface temperature
- **Accuracy**: ±0.5°C (typical)
- **Range**: -55°C to +125°C
- **Interface**: 1-Wire protocol
- **Operating Voltage**: 3.0V – 5.5V

---

## 5. **Buzzer**
- **Type**: 5V Active Buzzer
- **Function**: Audio alert for abnormal vital signs
- **Volume**: ~85 dB at 10 cm

---

## 6. **LCD & OLED Displays**
- **16x2 LCD with I2C**:
  - 2-line character display
  - Reduced wiring via I2C
- **0.96" OLED**:
  - 128x64 resolution
  - I2C Interface
  - White/Blue variant

---

These sensors collectively enable accurate, non-invasive monitoring of vital parameters in real-time.
