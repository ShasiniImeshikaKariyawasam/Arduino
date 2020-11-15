void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  forward();
  delay(5000);
  backward();
  delay(5000);
  
}

void forward() {
  digitalWrite(12,HIGH);    //clockwise
  digitalWrite(13,LOW);
  
}

void backward() {
  digitalWrite(12,LOW);     //anti clockwise
  digitalWrite(13,HIGH);
}
