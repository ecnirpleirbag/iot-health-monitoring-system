
---

### ✅ `documentation/technical_docs/troubleshooting_guide.md`
```markdown
# Troubleshooting Guide

## Sensor Issues

- **DHT11 reads NaN**: Check VCC and data pin connections. Use a pull-up resistor.
- **ECG signal too noisy**: Use shielding, separate analog and digital grounds.

## Connectivity Issues

- **WiFi not connecting**:
  - Check SSID/password
  - Verify if ESP32 firmware is flashed properly

## API/Data Upload

- **HTTP 400**:
  - Check JSON structure
- **Timeout**:
  - Check WiFi signal and cloud server status
