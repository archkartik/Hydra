#include <ESP8266WiFi.h>
// WiFi network parameters 
const char* ssid = "Tech_D9756536";
const char* password = "37GcDqKd7uD6";

void setup() {
// Start serial
Serial.begin(115200);
//a small delay is added to initialize the serial port
delay(10);

// Connecting to a WiFi network
Serial.println();
Serial.println();
Serial.print("Connecting to ");
Serial.println(ssid);
WiFi.begin(ssid, password); 
while (WiFi.status() != WL_CONNECTED) {
  delay (500);
  Serial.print(".");
}
Serial.println("");
Serial.println("WiFi connected");
Serial.println("IP address: ");
Serial.println(WiFi. localIP());
}

void loop() {
}