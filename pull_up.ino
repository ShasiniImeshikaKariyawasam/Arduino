void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);   //pull up
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int x = digitalRead(2);
  Serial.println(x);

  if (x==LOW){
    digitalWrite(13,HIGH);
    }

    else {
      digitalWrite(13,LOW);
      }

}
