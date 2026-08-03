void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); }
  delay(500);

  int answer = addTen(5);
  Serial.print("addTen(5) = ");
  Serial.println(answer);

  Serial.print("addTen(100) = ");
  Serial.println(addTen(100));

  Serial.print("scaleToScreen(50) = ");
  Serial.println(scaleToScreen(50));
}

void loop() {}

int addTen(int value) {
  return value + 10;
}

int scaleToScreen(int value) {
  return (value * 240) / 100;
}