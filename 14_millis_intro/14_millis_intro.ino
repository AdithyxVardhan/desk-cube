void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); }
}

void loop() {
  Serial.println(millis());
  delay(500);
}