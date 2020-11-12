void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = 10;
  int b = 20;
  
  addition(a,b);

}

int addition(int x, int y)  {
  int sum = x+y;
  Serial.println(sum); 
}
