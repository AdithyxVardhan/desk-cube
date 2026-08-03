unsigned long lastBlink = 0;
bool ledOn = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  while (!Serial) { delay(10); }
}

void loop() {
  if (millis() - lastBlink >= 1000) {
    lastBlink = millis();
    ledOn = !ledOn;
    digitalWrite(LED_BUILTIN, ledOn);
    Serial.println("blink");
  }
}