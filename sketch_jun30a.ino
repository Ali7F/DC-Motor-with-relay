void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(6,1);
delay(2000);
digitalWrite(6,0);
delay(2000);
}
