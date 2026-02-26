void setup() {
  Serial.begin(115200);
  Serial.println("Esperant dades...");
}

void loop() {
  if (Serial.available()) {
    String dades = Serial.readStringUntil('\n');
    dades.trim();
    Serial.println("Dades rebudes: " + dades);
  }
}
