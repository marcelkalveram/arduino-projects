void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(A0/4);
  Serial.println(value);
  Serial.write(value);
  delay(10);
}

