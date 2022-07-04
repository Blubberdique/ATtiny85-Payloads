void setup() {
  // put your setup code here, to run once:

}

#include "DigiKeyboard.h"

void loop() {
  // put your main code here, to run repeatedly:

  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT); //Opens the Start panel
  DigiKeyboard.delay(100);
  DigiKeyboard.print("Check for updates");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(500); //Opens up Windows Updater
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Presses "Search for updates" or "Install now"
  DigiKeyboard.delay(100);

  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT); //Opens the Start panel
  DigiKeyboard.delay(100);
  DigiKeyboard.print(intel driver & support assistant);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500); //Opens up Intel Driver & Support Assistant

}
