void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); }
  delay(500);

  int bins[20] = {5, 12, 28, 45, 62, 71, 58, 40, 33, 25,
                  20, 18, 15, 12, 10, 8, 6, 4, 3, 2};

  for (int i = 0; i < 20; i++) {
    printBinLabel(i);
    printBar(bins[i] / 3);
  }
}

void loop() {}

void printBinLabel(int index) {
  Serial.print("bin ");
  if (index < 10) Serial.print(" ");
  Serial.print(index);
  Serial.print(" |");
}

void printBar(int length) {
  for (int i = 0; i < length; i++) {
    Serial.print("#");
  }
  Serial.println();
}
