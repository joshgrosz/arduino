//SOS WITH LED
//MADE USING A BREADBOARD, PLAIN LED, 220 OHM RESISTOR AND TWO M-M JUMPERS CONNECTED TO GND AND 13 PIN

void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
}

void morseO() {
   for (int i=0; i<3; i++){  
    digitalWrite(13, HIGH); // 1k ms pause between each dot
    delay(1000);            
    digitalWrite(13, LOW);
    delay(1000);            
    } 
  }
void morseS() {
      for (int i=0; i<3; i++){  
        digitalWrite(13, HIGH); // 3k ms pause between each dash
        delay(3000);            
        digitalWrite(13, LOW);  
        delay(3000);            
      }
  }
  
void loop() {
 morseS();
 delay(3000); //3k ms pause between each letter
 morseO();
 delay(3000);
 morseS();
 delay(3000);
  exit(0);
}
