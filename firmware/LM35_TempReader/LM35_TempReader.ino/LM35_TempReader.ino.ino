const int sensorPins[] = {A0, A1, A2}; 
const int numSensors = 3;
int adcValues[3]; 

void setup() {
  Serial.begin(9600);
}

void loop() {

  for (int i = 0; i < numSensors; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
  }

  float t1 = (adcValues[0] * 5.0 * 100.0) / 1023.0;
  float t2 = (adcValues[1] * 5.0 * 100.0) / 1023.0;
  float t3 = (adcValues[2] * 5.0 * 100.0) / 1023.0;
  Serial.print("{");
  Serial.print("\"temp1\": "); Serial.print(t1); Serial.print(", ");
  Serial.print("\"temp2\": "); Serial.print(t2); Serial.print(", ");
  Serial.print("\"temp3\": "); Serial.print(t3);
  Serial.println("}");

  delay(1000); 
}