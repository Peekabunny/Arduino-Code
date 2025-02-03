
const int LED = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
  */
//   change the delay rate
for(int i=100; i<=10000; i=i+100){
  digitalWrite(LED, HIGH);
  delay(i);
  digitalWrite(LED, LOW);
  delay(i);
}

}
