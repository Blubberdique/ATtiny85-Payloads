// This payloads mashes the TAB key 20 times.

#include "DigiKeyboard.h"
#define KEY_TAB 0x09 // TAB key

void setup() {
    // Remains empty
}

void loop() {

    DigiKeyboard.update();
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(3000);

    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    
}
