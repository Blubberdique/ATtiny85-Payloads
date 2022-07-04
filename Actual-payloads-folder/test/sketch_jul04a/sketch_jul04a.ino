#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
  DigiKeyboard.print("notepad.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}
