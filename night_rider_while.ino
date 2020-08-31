int leds[] = {2,3,4,5,6,7,8,9,10};

void setup() {
  for (int i=0; i<9; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  int i;
  while (i<8) {
   digitalWrite(leds[i], HIGH);
   delay(100);
   digitalWrite(leds[i], LOW);
   i++;
  }
  while (i>0) {
   digitalWrite(leds[i], HIGH);
   delay(100);
   digitalWrite(leds[i], LOW);
   i--;
  }
}
