#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Keyboard.begin();
Serial.print(analogRead(A0));
Serial.print(analogRead(A1));

if (analogRead(A0) > 360) { //controls w and s movement
   Keyboard.press('w');
}
   else if (analogRead(A0) < 340) {
  Keyboard.press('s');
}
  else {
    Keyboard.release('w');
    Keyboard.release('s');
  }




if (analogRead(A1) > 345) {
  Keyboard.press('a');
}
  else if (analogRead(A1) < 330) {
    Keyboard.press('d');
  }
  else {
  Keyboard.release('d');
  Keyboard.release('a');
}
  
}
