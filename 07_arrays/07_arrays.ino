void setup() {
  Serial.begin(115200);
  delay(1000);

  int bins[8] = {12, 45, 78, 34, 90, 23, 67, 11};

  Serial.println("All values:");
  for (int i = 0; i < 8; i++) {
    Serial.print("bin ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.println(bins[i]);
  }

  int biggest = 0;
  for (int i = 0; i < 8; i++) {
    if (bins[i] > biggest) {
      biggest = bins[i];
    }
  }
  Serial.print("Largest: ");
  Serial.println(biggest);

  int total = 0;
  for (int i = 0; i < 8; i++) {
    total = total + bins[i];
  }
  Serial.print("Average: ");
  Serial.println(total / 8);
}

void loop() {}

