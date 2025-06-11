Algorithm Documentation
1. Pulse Transit Time (PTT) Based BP Estimation
Step 1: Capture ECG and PPG signals.

Step 2: Detect R-peak in ECG and rising edge in PPG.

Step 3: Calculate PTT = t_PPG - t_ECG.

Step 4: Use a regression equation to estimate blood pressure:

BP
=
𝑎
×
PTT
+
𝑏
BP=a×PTT+b
2. Heart Rate Measurement
Based on MAX30102 IR LED signal peaks.

Count peaks per 60 seconds or use time between beats.

3. Temperature
Read from DHT11/DHT22.

Simple digital readout every N seconds.
