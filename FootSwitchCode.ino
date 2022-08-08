/* 
 * FootSwitchCode by ginzu
 */
 
#include "Keyboard.h"


//declaring button pins

const int buttonPinLeft = 2;          
const int buttonPinRight = 3;  
void setup() {

  //declare the buttons as input_pullup
  
Keyboard.begin();
pinMode(2, INPUT_PULLUP); // Left
pinMode(3, INPUT_PULLUP); // Right

}


void loop() {

  //checking the state of the button

  int joystickLeft = digitalRead(2);
  int joystickRight = digitalRead(3);


    // Pedal Left - Arrow Left Key
    if (joystickLeft == LOW) {
    Keyboard.press(216);
    }
    else {
    Keyboard.release(216);
    }
    
    // Pedal Right - Arrow Right Key
    if (joystickRight == LOW) {
    Keyboard.press(215);
    }
    else {
    Keyboard.release(215);
    }


}
