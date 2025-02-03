const int LED_PIN = 9; //
#define POTENTIOMETER_PIN A0

void setup()
{
  pinMode(LED_PIN, OUTPUT);
//The LED is a component we control, so we use pinMode() with OUTPUT.

// analog pins, no need to use pinMode() as those pins are already in INPUT mode
}


void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
// This value will be in the range 0-1023, store in potentiometer value
  int brightness = potentiometerValue / 4;
// take the potentiometerValue from the range 0-1023, to the range 0-255.

// option 2 
/*
  int brightness = map(potentiometerValue, 0, 1023, 0, 255);
*/
  
  analogWrite(LED_PIN, brightness);
  
}