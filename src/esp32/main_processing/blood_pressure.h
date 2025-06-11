#ifndef BLOOD_PRESSURE_H
#define BLOOD_PRESSURE_H

float calculatePTT(unsigned long ecgTime, unsigned long ppgTime);
void estimateBloodPressure(float ptt, float &systolic, float &diastolic);

#endif
