int led = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // analog(pin control, 8-bit value between 0 to 255)
for (int i = 0; i < 256; i++){
  analogWrite(led, i);
  delay(10);
}
for(int i = 255; i>=0; i--){
  analogWrite(led, i);
  delay(10);
}
}
