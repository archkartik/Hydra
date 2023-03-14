
// constants 
const int TRIG_PIN   = D1; 
const int ECHO_PIN   = D2;
const int DISTANCE_THRESHOLD = 5; // centimeters

// variables
float duration_us = 0; 
float distance_cm = 0;

void setup() {
  Serial.begin (9600);        	
  pinMode(TRIG_PIN, OUTPUT);   
  pinMode(ECHO_PIN, INPUT);    
}

void loop() {
  // generate 10-microsecond pulse to TRIG pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // duration of pulse from ECHO pin
  duration_us = pulseIn(ECHO_PIN, HIGH);
  // calculate the distance
  distance_cm = 0.017 * duration_us;

  // print
  Serial.print("distance object: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

}

