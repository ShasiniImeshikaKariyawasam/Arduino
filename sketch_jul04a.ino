int x = 100;
int y = x+100;


void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println("Hello World");
  Serial.println(x); //1000
  x=1000;
  y=x+100;
  Serial.println(y);//1100
  
  
  delay(1000);

}
