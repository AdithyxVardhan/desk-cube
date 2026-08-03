void setup() {
  Serial.begin(115200);
  delay(1000);

  int bins[20] = {5, 12, 28, 45, 62, 71, 58, 40, 33, 25,
                  20, 18, 15, 12, 10, 8, 6, 4, 3, 2};

  for (int i = 0; i < 20; i++) {
    Serial.print("bin ");
    if (i < 10) Serial.print(" ");
    Serial.print(i);
    Serial.print(" |");

    int barLength = bins[i] / 3;
    for (int j = 0; j < barLength; j++) {
      Serial.print("#");
    }
    Serial.println();
  }
}

void loop() {}