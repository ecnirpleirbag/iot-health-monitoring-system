void setup() {
  Serial.begin(9600);
  String data = "HR:78,TEMP:36.7";
  int hrIndex = data.indexOf("HR:");
  int tempIndex = data.indexOf(",TEMP:");
  int hr = data.substring(hrIndex + 3, tempIndex).toInt();
  float temp = data.substring(tempIndex + 6).toFloat();
  Serial.printf("HR = %d, TEMP = %.1f\n", hr, temp);
}
