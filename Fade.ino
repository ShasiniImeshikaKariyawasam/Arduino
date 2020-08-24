int led = 9;           
int brightness = 0;    
int fadeAmount = 5;    

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);  // analogWrite(9,0);  0 to 255, 255 to 0, 0 to 255
  brightness = brightness + fadeAmount; //5  10  15....255 + (-5) = 250  245  240...0

   if (brightness <= 0 || brightness >= 255) //if (x<512) {led HIGH;}
   {
    fadeAmount = -fadeAmount; //5  -5
  }
  
  delay(30);
}
