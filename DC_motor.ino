const int pwm = 2 ; 
const int x = 8 ;
const int y = 9 ;

void setup() {
   pinMode(pwm,OUTPUT) ; 
   pinMode(x,OUTPUT) ; 
   pinMode(y,OUTPUT) ;
}

void loop() {
   
   digitalWrite(x,HIGH) ;
   digitalWrite(y,LOW) ;
   analogWrite(pwm,255) ;
 
   delay(3000) ;
   
   digitalWrite(x,HIGH) ;
   digitalWrite(y,HIGH) ;
   delay(1000) ;
   
   digitalWrite(x,LOW) ;
   digitalWrite(y,HIGH) ;
   delay(3000) ;
  
   digitalWrite(x,HIGH) ;
   digitalWrite(y,HIGH) ;
   delay(1000) ;
}
