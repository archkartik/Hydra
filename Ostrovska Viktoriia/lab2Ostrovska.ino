byte vic;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(230400);
}

void loop() {
  if (Serial.available()) 
  {
    vic=Serial.read();

    if (vic==86)
    {
    Serial.println("ON");
    digitalWrite(LED_BUILTIN, LOW);
    }

    if (vic==65)
    {
    Serial.println("OFF");
    digitalWrite(LED_BUILTIN, HIGH);
    }
  }
}  