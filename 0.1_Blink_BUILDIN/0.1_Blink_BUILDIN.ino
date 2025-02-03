


void setup() {
  //initialize digital pin LED_BUILTIN as an output
pinMode(LED_BUILTIN, OUTPUT);
}

// digitalWrite function only works on pins that have been configured as outputs using the pinMode
// It sets the voltage level of a specified digital pin on the Arduino.

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second  1000 milliseconds
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
