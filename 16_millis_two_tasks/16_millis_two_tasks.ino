unsigned long lastBlink = 0;
unsigned long lastPrint = 0;
bool ledOn = false;
int counter = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  while (!Serial) { delay(10); }
}

void loop() {

  // Task 1 — blink fast, every 200 ms
  if (millis() - lastBlink >= 200) {
    lastBlink = millis();
    ledOn = !ledOn;
    digitalWrite(LED_BUILTIN, ledOn);
  }

  // Task 2 — print slowly, every 1500 ms
  if (millis() - lastPrint >= 1500) {
    lastPrint = millis();
    counter++;
    Serial.print("Still running, count = ");
    Serial.println(counter);
  }
  
}