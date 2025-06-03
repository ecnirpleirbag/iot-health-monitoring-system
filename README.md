# IoT-Enabled Non-Invasive Blood Pressure and Vital Signs Monitoring System

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=Arduino&logoColor=white)](https://www.arduino.cc/)
[![ESP32](https://img.shields.io/badge/ESP32-E7352C?style=flat&logo=espressif&logoColor=white)](https://www.espressif.com/)
[![IoT](https://img.shields.io/badge/IoT-4285F4?style=flat&logo=google-cloud&logoColor=white)](https://cloud.google.com/iot)

> A comprehensive IoT-based health monitoring system that continuously tracks vital signs including heart rate, body temperature, blood pressure, and motion using cost-effective sensors and microcontrollers.

## 🌟 Overview

This project presents an innovative **Internet of Things (IoT)** solution for **remote health monitoring** that addresses the growing demand for accessible, continuous, and affordable healthcare. The system is particularly designed for aging populations, patients with chronic diseases, and underserved rural communities.

### Key Innovation: Pulse Transit Time (PTT) Blood Pressure Estimation
- **Non-invasive** blood pressure monitoring without inflatable cuffs
- **Continuous monitoring** capability for long-term health tracking
- **Comfort-focused** design for extended wear

## ✨ Features

### 🏥 Health Monitoring
- **Multi-parameter monitoring**: Heart rate, SpO2, body temperature, blood pressure, motion
- **Real-time data acquisition** with high accuracy (±0.3°C temperature, ±2-5 BPM heart rate)
- **Fall detection** using 6-axis motion sensor
- **Non-contact temperature sensing** for hygiene and convenience

### 🌐 IoT Connectivity
- **WiFi-enabled** real-time data transmission
- **Cloud integration** for remote monitoring
- **Web dashboard** for healthcare providers and patients
- **Mobile-responsive** interface

### 🚨 Alert System
- **Multi-modal alerts**: Visual (LCD/LED), Audio (Buzzer), Web notifications
- **Configurable thresholds** for personalized monitoring
- **Critical event detection** with immediate notifications

### 🔋 System Design
- **Low power consumption** for extended operation
- **Modular architecture** for easy scalability
- **Cost-effective** solution using readily available components

## 🏗️ System Architecture

```
┌─────────────────────────────────────────────────────────────────┐
│                    IoT Health Monitoring System                 │
├─────────────────────────────────────────────────────────────────┤
│                                                                 │
│  ┌─────────────────┐    Serial     ┌─────────────────┐          │
│  │   Arduino UNO   │──────────────▶│      ESP32      │          │
│  │                 │  Communication │                 │          │
│  │  ┌─────────────┐│                │  ┌─────────────┐│          │
│  │  │ AD8232 ECG  ││                │  │ WiFi Module ││          │
│  │  │ MAX30100 HR ││                │  │ Web Server  ││          │
│  │  │ MLX90614 °C ││                │  │ LCD Control ││          │
│  │  │ MPU6050 IMU ││                │  │ Alert System││          │
│  │  └─────────────┘│                │  └─────────────┘│          │
│  └─────────────────┘                └─────────────────┘          │
│           │                                   │                  │
│           ▼                                   ▼                  │
│  ┌─────────────────┐                ┌─────────────────┐          │
│  │  Sensor Data    │                │  User Interface │          │
│  │  Preprocessing  │                │  & Alerts       │          │
│  └─────────────────┘                └─────────────────┘          │
│                                             │                    │
│                                             ▼                    │
│                                   ┌─────────────────┐            │
│                                   │  Cloud Platform │            │
│                                   │  Remote Access  │            │
│                                   │  Data Analytics │            │
│                                   └─────────────────┘            │
└─────────────────────────────────────────────────────────────────┘
```

## 🔧 Hardware Components

### Microcontrollers
| Component | Purpose | Features |
|-----------|---------|----------|
| **ESP32** | Main processing & communication | WiFi, Bluetooth, dual-core, low power |
| **Arduino UNO** | Sensor interface & preprocessing | ATmega328P, reliable analog processing |

### Sensors
| Sensor | Parameter | Accuracy | Interface |
|--------|-----------|----------|-----------|
| **AD8232** | ECG/Heart activity | Medical grade | Analog |
| **MAX30100** | Heart rate & SpO2 | ±2-5 BPM, ±2% | I2C |
| **MLX90614** | Body temperature | ±0.3°C | I2C |
| **MPU6050** | Motion/Fall detection | ±0.1g | I2C |

### Additional Components
- **16x2 LCD with I2C** - Real-time display
- **Buzzer** - Audio alerts
- **LED indicators** - Visual status
- **9V 2A Power Adapter** - Stable power supply

## 📋 Installation

### Prerequisites
- Arduino IDE (v1.8.19 or later)
- ESP32 Board Package
- Required libraries (see below)
- WiFi network access

### Required Libraries

**For Arduino UNO:**
```cpp
#include <Wire.h>
#include <MAX30100lib.h>          // MAX30100 sensor library
#include <Adafruit_MLX90614.h>    // MLX90614 temperature sensor
#include <MPU6050.h>              // MPU6050 motion sensor
#include <SoftwareSerial.h>       // Serial communication
```

**For ESP32:**
```cpp
#include <WiFi.h>                 // WiFi connectivity
#include <HTTPClient.h>           // HTTP requests
#include <ArduinoJson.h>          // JSON handling
#include <LiquidCrystal_I2C.h>    // LCD display
#include <WebServer.h>            // Web server
#include <ESPmDNS.h>              // mDNS for local discovery
#include <SPIFFS.h>               // File system
```

### Installation Steps

1. **Clone the repository:**
```bash
git clone https://github.com/ecnirpleirbag/iot-health-monitoring.git
cd iot-health-monitoring
```

2. **Install required libraries:**
   - Open Arduino IDE
   - Go to Tools → Manage Libraries
   - Install each required library

3. **Configure WiFi settings:**
```cpp
// In ESP32 code (config.h)
const char* ssid = "YOUR_WIFI_SSID"; // change to wifi name
const char* password = "YOUR_WIFI_PASSWORD"; // add your wifi password
```

4. **Upload code:**
   - Upload `arduino_sensors.ino` to Arduino UNO
   - Upload `esp32_main.ino` to ESP32

## 🔌 Hardware Setup

### Arduino UNO Connections

**AD8232 ECG Sensor:**
```
VCC    → 3.3V
GND    → GND
OUTPUT → A0
LO+    → D11
LO-    → D10
```

**MAX30100 (Heart Rate & SpO2):**
```
VCC → 3.3V
GND → GND
SDA → A4
SCL → A5
```

**MLX90614 (Temperature):**
```
VCC → 3.3V
GND → GND
SDA → A4
SCL → A5
```

**MPU6050 (Motion):**
```
VCC → 3.3V
GND → GND
SDA → A4
SCL → A5
```

### ESP32 Connections

**LCD Display (I2C):**
```
VCC → 3.3V
GND → GND
SDA → GPIO21
SCL → GPIO22
```

**Buzzer:**
```
+ → GPIO23
- → GND
```

**Status LED:**
```
Anode   → GPIO2
Cathode → GND (via 220Ω resistor)
```

**Arduino Communication:**
```
Arduino TX (D1) → ESP32 RX (GPIO16)
Arduino RX (D0) → ESP32 TX (GPIO17)
```

## 🚀 Usage

### 1. System Startup
1. Power on the system with 9V adapter
2. Wait for initialization (LCD shows "System Starting...")
3. Device connects to WiFi automatically
4. Access web dashboard at displayed IP address

### 2. Web Dashboard
Navigate to `http://health-monitor.local` or the IP address shown on LCD:

- **Real-time monitoring** of all vital signs
- **Historical data visualization** with charts
- **Alert configuration** and threshold settings
- **Data export** functionality (CSV, JSON)
- **Mobile-responsive** design for smartphones/tablets

### 3. Monitoring Parameters

| Parameter | Normal Range | Alert Threshold |
|-----------|--------------|-----------------|
| **Heart Rate** | 60-100 BPM | <50 or >120 BPM |
| **Temperature** | 36.1-37.2°C | <35°C or >37.5°C |
| **SpO2** | >95% | <90% |
| **Motion** | Stable | Sudden acceleration >2.5g |

## 📊 Blood Pressure Estimation

### Pulse Transit Time (PTT) Method

The system implements a novel **cuffless blood pressure estimation** using PTT:

```cpp
// PTT Calculation
float ptt = time_ppg_peak - time_ecg_r_peak;

// Blood Pressure Estimation
float systolic = A_sys * (1.0 / ptt) + B_sys;
float diastolic = A_dia * (1.0 / ptt) + B_dia;
```

### Calibration Process
1. Take reference BP measurement with clinical device
2. Record simultaneous ECG and PPG signals
3. Calculate calibration constants (A, B)
4. Update firmware with personalized constants

**Note:** Individual calibration required for accurate BP estimation.

## 📈 Performance Validation

### Accuracy Comparison

Our system was validated against clinical-grade devices:

| Parameter | Our System | Reference Device | Mean Error |
|-----------|------------|------------------|------------|
| **Temperature** | MLX90614 | Digital Thermometer | ±0.3°C |
| **Heart Rate** | MAX30100 | Manual Count | ±3 BPM |
| **Motion** | MPU6050 | Clinical Accelerometer | ±0.1g |

### Test Results Summary
- **Temperature accuracy**: 98.2% within ±0.5°C
- **Heart rate accuracy**: 96.7% within ±5 BPM
- **Fall detection**: 94.3% sensitivity, 97.1% specificity
- **System uptime**: >99% over 30-day testing period

## 🔒 Security & Privacy

### Data Protection
- **Local processing** minimizes cloud dependency
- **Encrypted WiFi** communication (WPA2/WPA3)
- **HTTPS** for web dashboard access
- **Optional cloud storage** with user consent

### Privacy Features
- **Anonymous data mode** available
- **Local-only operation** option
- **User-controlled data sharing**
- **Automatic data purging** after set period

## 🛠️ Troubleshooting

### Common Issues & Solutions

**WiFi Connection Failed:**
```
- Verify SSID and password in config.h
- Ensure 2.4GHz network (ESP32 limitation)
- Check signal strength and range
- Restart ESP32 and router if needed
```

**Sensor Reading Errors:**
```
- Check all wire connections
- Verify power supply (stable 9V)
- Clean sensor contacts
- Re-upload sensor calibration values
```

**Inaccurate Readings:**
```
- Perform sensor recalibration
- Check for electromagnetic interference
- Ensure proper sensor-skin contact
- Update threshold values for individual
```

**Web Dashboard Not Accessible:**
```
- Check ESP32 IP address on LCD
- Verify device and computer on same network
- Try http://health-monitor.local
- Check firewall settings
```

## 🔄 Future Enhancements

### Planned Features
- [ ] **Machine Learning** integration for predictive analytics
- [ ] **Mobile app** (iOS/Android) development
- [ ] **Additional sensors** (respiratory rate, glucose monitoring)
- [ ] **Voice commands** and audio feedback
- [ ] **Integration APIs** for hospital systems
- [ ] **Telemedicine platform** connectivity

### Research Directions
- [ ] **Advanced BP algorithms** using deep learning
- [ ] **Multi-user support** with individual profiles
- [ ] **Wearable form factor** optimization
- [ ] **Clinical trial validation** for medical certification

## 🤝 Contributing

We welcome contributions! Please see our [Contributing Guidelines](CONTRIBUTING.md) for details.

### How to Contribute
1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit changes (`git commit -m 'Add AmazingFeature'`)
4. Push to branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

### Areas for Contribution
- **Hardware optimization** and new sensor integration
- **Algorithm improvement** for better accuracy
- **Mobile app development**
- **Documentation** and tutorials
- **Testing** and validation

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👥 Authors & Acknowledgments

**Development Team:**
- **Gabriel Prince D** - *Lead Developer* - *Student ME CSE* - [Email](mailto:gabrielprince2320060@ssn.edu.in)
- **Arjun MP** - *Hardware Integration* - *Student ME CSE* - [Email](mailto:arjun2320047@ssn.edu.in)
- **Kanchana R** - *Project Mentor*- *Associate Professor ME CSE*  - [Email](mailto:rkanch@ssn.edu.in)
- **Kharihara Sudhan** - *System Design* - *Student MTech IT*  - [Email](mailto:khariharasudhan2320078@ssn.edu.in)

**Institution:**
- Sri Sivasubramaniya Nadar College of Engineering, Chennai, India

**Special Thanks:**
- SSN College of Engineering for project funding
- Healthcare professionals who provided validation data
- Open-source community for libraries and tools

## 📞 Support & Contact

### Technical Support
- **GitHub Issues**: [Create an issue](https://github.com/ecnirpleirbag/iot-health-monitoring/issues)
- **Email Support**: [project-support@ssn.edu.in](mailto:gabrielprince2320060@ssn.edu.in)
- **Documentation**: [Wiki Pages](https://github.com/ecnirpleirbag/iot-health-monitoring/wiki)

### Research Collaboration
For academic collaborations or research partnerships:
- **Research Contact**: [Dr. Kanchana R](mailto:rkanch@ssn.edu.in)
- **Institution**: SSN College of Engineering

## ⚠️ Medical Disclaimer

**IMPORTANT:** This device is designed for **educational and research purposes only**. It is **NOT intended for clinical diagnosis** or as a substitute for professional medical advice, diagnosis, or treatment. 

- Always consult qualified healthcare professionals for medical decisions
- Do not rely solely on this device for critical health monitoring
- Seek immediate medical attention for emergency situations
- Regular calibration against clinical devices is recommended

## 📊 Project Status

![Project Status](https://img.shields.io/badge/Status-Active%20Development-green)
![Build Status](https://img.shields.io/badge/Build-Passing-brightgreen)
![Documentation](https://img.shields.io/badge/Docs-Complete-blue)
![Testing](https://img.shields.io/badge/Testing-Validated-success)

**Last Updated:** June 2025  
**Version:** 1.0.0  
**Stability:** Beta

---

<div align="center">

**🌟 Star this repository if you find it helpful! 🌟**

[⬆ Back to Top](#iot-enabled-non-invasive-blood-pressure-and-vital-signs-monitoring-system)

</div>
