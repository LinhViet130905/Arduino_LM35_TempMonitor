const int sensorPin = A0; 

void setup() {
   Serial.begin(9600);
  Serial.println("--- Bat dau doc nhiet do tu LM35 ---");
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * (5.0 / 1024.0);
  float temperatureC = voltage * 100.0;

  Serial.print("Gia tri ADC: ");
  Serial.print(reading);
  Serial.print(" | Dien ap: ");
  Serial.print(voltage);
  Serial.print("V | Nhiet do: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  delay(1000);
}
