void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("Counting up:");
  for (int i = 0; i <= 5; i++) {
    Serial.println(i);
  }

  Serial.println("Counting down:");
  for (int i = 10; i > 0; i--) {
    Serial.println(i);
  }

  Serial.println("Every 5:");
  for (int i = 0; i <= 50; i = i + 5) {
    Serial.println(i);
  }
}

void loop() {}
