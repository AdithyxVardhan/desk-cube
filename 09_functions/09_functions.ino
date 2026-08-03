void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); }
  delay(500);

  sayHello();
  sayHello();
  printSeparator();
  sayHello();
}

void loop() {}

void sayHello() {
  Serial.println("Hello from a function");
}

void printSeparator() {
  Serial.println("--------------------");
}
