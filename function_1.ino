void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = 10;
  int b = 20;
  int total = addition(a,b);
  Serial.println(tatol);

}

int addition(int x, int y)  {
  int sum = x+y;
  return sum;  
}
