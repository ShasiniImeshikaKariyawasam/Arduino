int x=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  x=1;

}

void loop() {
  // put your main code here, to run repeatedly:
  if(x==1) {
    for(int i=0; i<10; i++) {
      Serial.println("Hello world");
    }
    x=2;
  }

  else {
    Serial.println("Task completed.");
  }

}
