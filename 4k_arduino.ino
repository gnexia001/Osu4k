#include <Keyboard.h>

// Pins
int pin_1 = A0;
int pin_2 = A1;
int pin_3 = A8;
int pin_4 = A7;

int pin_1_val = 0;
int pin_2_val = 0;
int pin_3_val = 0;
int pin_4_val = 0;

void setup() {
  
 
  Keyboard.begin();
}

void loop() {
  
   pin_1_val = analogRead(pin_1);
   pin_2_val = analogRead(pin_2);
   pin_3_val = analogRead(pin_3);
   pin_4_val = analogRead(pin_4);
   
   if (pin_1_val < 8){Keyboard.press('d');}
   else{Keyboard.release('d');}
   if (pin_2_val < 8){Keyboard.press('f');}
   else{Keyboard.release('f');}
   if (pin_3_val < 8){Keyboard.press('j');}
   else{Keyboard.release('j');}
   if (pin_4_val < 8){Keyboard.press('k');}
   else{Keyboard.release('k');}

   
}dfjkdfjkdkjfjjfjfdjjdjddjdjdjdjjdjdjfkkdkjdfkjdfkjdfjdffkjdfkjdfkjdfjdfkjdjfkdjfkdjfkdjfdjfkjjdddddddjjjjjjjjjjjjjjjjjjjjjjjjjj
