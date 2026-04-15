const int sensorPins[] = {A0, A1, A2};
const int numSensors = 3;
int adcValues[numSensors]; 

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

  Serial.print(t1); Serial.print("\t");
  Serial.print(t2); Serial.print("\t");
  Serial.println(t3);

  delay(1000); 
}