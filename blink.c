void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for (int i = 5; i > 0; i--) {
    digitalWrite(13, HIGH);
  	delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  for (int j = 5; j > 0; j--) {
    digitalWrite(13, HIGH);
  	delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
  }
}
