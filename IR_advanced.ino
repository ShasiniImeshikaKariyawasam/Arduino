const int pinIRd = 2;
const int pinIRa = A0;
const int pinLED = 13;
int IRvalueA = 0;
int IRvalueD = 0;

 

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

 

  if(IRvalueA < 880){
    digitalWrite(pinLED, HIGH);
    Serial.print("object is within the range");
  }else{
    digitalWrite(pinLED, LOW);
    Serial.print("object is not within the range");
  }

 

  delay(100);
}
