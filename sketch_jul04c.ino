int x;
int pin = 13;

void setup() {
  Serial.begin(9600);

}

void loop() {
  x = analogRead(A0);
  Serial.println(x);

  if(x>512){
    digitalWrite(pin,HIGH);
  }
  else{
    digitalWrite(pin,LOW);
  }

}
