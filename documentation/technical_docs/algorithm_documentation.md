# Algorithm Documentation

## Pulse Transit Time (PTT) Based Blood Pressure Estimation

**Step 1**: Collect synchronized ECG and PPG signals.  
**Step 2**: Detect R-peak in ECG and foot of PPG waveform.  
**Step 3**: Calculate PTT = PPG_time - ECG_time  
**Step 4**: Estimate BP using the empirical formula:

Systolic = A - B × PTT
Diastolic = C - D × PTT

Where A, B, C, and D are calibration constants.

---

## Heart Rate Measurement

Using MAX30100/02 IR signals:
- Detect peaks in IR signal to calculate beats per minute (BPM)
- Apply moving average filter for noise reduction

---

## Body Temperature

Using DHT11 sensor:
- `temp = dht.readTemperature();`

---

## Data Aggregation

- All sensor values are timestamped and sent via WiFi to cloud every 2–3 seconds.
