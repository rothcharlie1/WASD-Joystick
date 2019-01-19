#include <Keyboard.h>

// vertical potentiometer connected to pin A0
//horizontal potentiometer connected to pin A1

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Keyboard.begin();
Serial.print(analogRead(A0));
Serial.print(analogRead(A1));

if (analogRead(A0) > 360) { //anything greater than 360 on the vertical potentiometer will register a 'w'
   Keyboard.press('w');
}
   else if (analogRead(A0) < 340) { // anything less than 340 will register an 's'
  Keyboard.press('s');
}
  else {
    Keyboard.release('w'); // any values between 340 and 360 will release the keys. this buffer accounts for impreciseness of value of resting potentiometer
    Keyboard.release('s');
  }




if (analogRead(A1) > 345) { // any values greater than 345 register 'a'
  Keyboard.press('a');
}
  else if (analogRead(A1) < 330) { // any values less than 330 register 'd'
    Keyboard.press('d');
  }
  else {
  Keyboard.release('d'); // 15 unit buffer between left and right
  Keyboard.release('a');
}
  
}
