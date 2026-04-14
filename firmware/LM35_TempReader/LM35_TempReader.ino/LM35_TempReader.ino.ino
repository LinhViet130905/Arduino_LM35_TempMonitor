const int sensorPins[] = {A0, A1}; 
int adcValues[2]; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 2; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
  }

  float temp1 = (adcValues[0] * 5.0 * 100.0) / 1024.0;
  float temp2 = (adcValues[1] * 5.0 * 100.0) / 1024.0;

  Serial.print(temp1);
  Serial.print(",");
  Serial.println(temp2);

  delay(1000); 
}
