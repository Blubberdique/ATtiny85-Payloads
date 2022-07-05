// Test file for alt-tabbing

#include "DigiKeyboard.h"
#define KEY_TAB 0x2B

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_TAB);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_TAB);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_TAB);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_TAB);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT , KEY_TAB);

}
