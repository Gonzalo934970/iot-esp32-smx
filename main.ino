const int LED_PIN = 25;

void setup() {
  Serial.begin(115200);     
  pinMode(LED_PIN, OUTPUT);  
  
}

void loop() {

  if (Serial.available()) {
    String linea = Serial.readStringUntil('\n');
    linea.trim();
 
      if (linea.equalsIgnoreCase("on")) {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("LED ENCÈS");
      } 
    if (linea.equalsIgnoreCase("OFF")) {
      digitalWrite(LED_PIN, LOW);
      Serial.println("LED APAGAT");
    } 

    
  }
}
