void setup() {
  pinMode(A0,OUTPUT);

}

void loop() {
  analogWrite(A0,255);
  delay(10);
  
  analogWrite(A0,175);
  delay(10);
  
  analogWrite(A0,100);
  delay(10);
  
  analogWrite(A0,0);
  delay(10);

  analogWrite(A0,100);
  delay(10);

  analogWrite(A0,175);
  delay(10);

  analogWrite(A0,255);
  delay(10);

}
