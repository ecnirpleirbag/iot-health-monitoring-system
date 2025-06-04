# Sensor Comparison for Vital Signs Monitoring

| Sensor Type | Purpose | Model Used | Accuracy | Cost | Notes |
|-------------|---------|------------|----------|------|-------|
| ECG         | Heart rate, R-wave detection | AD8232 | High | Medium | Needs skin contact |
| PPG         | Heart rate, pulse detection | MAX30102 | Moderate-High | Low | Affected by motion and light |
| Temp        | Body temperature | LM35 / DS18B20 | High | Low | Good skin contact required |
| BP (Non-invasive) | Reference BP value | Manual cuff (Omron) | High | Varies | Used for calibration |
| IMU         | Motion detection | MPU6050 | Moderate | Low | For artifact rejection |

## Key Observations
- ECG + PPG combo enables reliable PTT computation.
- Sensor fusion helps improve reliability under noisy conditions.
- Using cost-effective alternatives makes the system affordable and scalable.

## Selection Criteria
- **Accuracy**: Must meet medical-grade tolerances where applicable.
- **Power Efficiency**: Suitable for battery-powered deployment.
- **Form Factor**: Compact and wearable-friendly.
- **Interface Compatibility**: Must support I2C, SPI, or analog inputs for ESP32/RPi.

## Conclusion
A combination of MAX30102 for PPG and AD8232 for ECG provides a reliable and affordable setup for PTT-based blood pressure monitoring.
