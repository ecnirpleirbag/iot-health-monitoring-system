# Pulse Transit Time (PTT) and Blood Pressure Estimation

## What is PTT?
Pulse Transit Time (PTT) is the time interval between the R-wave of an ECG signal and the corresponding peak in a PPG waveform, typically measured at a peripheral site.

**PTT = PPG_peak_time – ECG_R_wave_time**

## Relationship with Blood Pressure
- **Inverse Relationship:** As blood pressure increases, arterial stiffness increases, reducing the time for the pulse wave to travel, hence reducing PTT.
- **Mathematical Models:**
  - BP = a × PTT + b, where a and b are subject-specific calibration coefficients.

## Use in This Project
- ECG is obtained via dry electrodes placed on the chest.
- PPG is captured using an IR pulse sensor on the finger.
- PTT is calculated in real-time on the ESP32 and processed further on the Raspberry Pi.

## Challenges
- Requires precise synchronization of ECG and PPG signals.
- Influenced by temperature, movement artifacts, and sensor misalignment.

## Benefits
- Enables cuff-less, continuous, and non-invasive BP monitoring.
- Ideal for wearable or home health monitoring systems.

## Future Directions
- Adaptive calibration using machine learning.
- Hybrid approach combining PTT with other parameters like PAT (Pulse Arrival Time) and HRV (Heart Rate Variability).
