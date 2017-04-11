void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int bval = Serial.read();
    // If the user types in 1
    if (bval == 49) { 
      digitalWrite(13, HIGH);
    // If the user types in 0
    } else if (bval == 48) {
      digitalWrite(13, LOW);
    }
  }
}
