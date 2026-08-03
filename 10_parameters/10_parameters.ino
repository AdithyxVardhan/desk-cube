void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); }
  delay(500);

  printBar(3);
  printBar(8);
  printBar(15);
}

void loop() {}

void printBar(int length) {
  for (int i = 0; i < length; i++) {
    Serial.print("#");
  }
  Serial.println();
}
