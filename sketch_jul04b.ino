void setup() {
  Serial.begin(9600);

}

void loop() {
  int x = analogRead(A0);
  Serial.println(x);
  float v = (5*x)/1024;
  Serial.println(v);
  //digitalWrite(13,HIGH);
  delay(1000);
  

}
