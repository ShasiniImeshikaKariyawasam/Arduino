void setup() {
  
    for (int i = 2; i < 10; i++) {
        pinMode(i, OUTPUT);
        
    }
}

// function to switch all LEDs off
void all_LEDs_Off(void)
{
    for (int i = 2; i < 10; i++) {
        digitalWrite(i, LOW);
    }
}

void loop() {
    // move on LED to the right
    for (int i = 2; i < 9; i++) {
        all_LEDs_Off();
        digitalWrite(i, HIGH);
        delay(200);
    }
    
    // move on LED to the left
     for (int i = 9; i > 2; i--) {
        all_LEDs_Off();
        digitalWrite(i, HIGH);
        delay(200);
    }
}
