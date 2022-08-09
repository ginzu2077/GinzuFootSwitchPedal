/* 
 * FootSwitchPedalCode by ginzu
 */
 
#include "Keyboard.h"
#include "Mouse.h"


//declaring button pins

const int buttonPinLeft = 2;          
const int buttonPinRight = 3;  
const int buttonPinLeftByMouse = 4; 

 
void setup() {

//declare the buttons as input_pullup

pinMode(2, INPUT_PULLUP); // Left
pinMode(3, INPUT_PULLUP); // Right
pinMode(4, INPUT_PULLUP); // Mouse
Keyboard.begin();
Mouse.begin();
}


void loop() {

  //checking the state of the button

  int pedalLeft = digitalRead(2);
  int pedalRight = digitalRead(3);
  int pedalLeft2 = digitalRead(4);


    // Pedal Left - Arrow Left Key
    if (pedalLeft == LOW) {
    Keyboard.press(216);
    }
    else {
    Keyboard.release(216);
    }
    
    // Pedal Right - Arrow Right Key
    if (pedalRight == LOW) {
    Keyboard.press(215);
    }
    else {
    Keyboard.release(215);
    }
    
   if (pedalLeft2 == LOW) {
    Mouse.press(MOUSE_MIDDLE);
    delay(100);
   }
   else {
   Mouse.release(MOUSE_MIDDLE);
   delay(100);
    }
}
