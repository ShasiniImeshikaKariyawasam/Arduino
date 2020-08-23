int x;
float y;

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
 x = analogRead(A0);
 if(x>512){
    digitalWrite(13,HIGH);
  }
  else{
      digitalWrite(13,LOW);
    }

}
