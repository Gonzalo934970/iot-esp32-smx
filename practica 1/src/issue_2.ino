void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available()) {
    String linea = Serial.readStringUntil('\n');
    linea.trim();
    Serial.println("Has escrit: " + linea);
  }
}
