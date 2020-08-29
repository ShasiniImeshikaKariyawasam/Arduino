const int pinIRd = 8;
const int pinIRa = A0;
const int pinLED = 13;

int IRvalueA;
int IRvalueD;

 void setup()
{
  Serial.begin(9600);
  pinMode(pinIRd,INPUT);
  pinMode(pinIRa,INPUT);
  pinMode(pinLED,OUTPUT);
}

void loop()
{
  IRvalueA = analogRead(pinIRa);
  IRvalueD = digitalRead(pinIRd);
  
  Serial.print("Analog Reading=");
  Serial.print(IRvalueA);
  Serial.print("\t Digital Reading=");
  Serial.println(IRvalueD);

  if (IRvalueA>880){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
    }
    
  
  delay(1000);
  
}
