#include "keypad_module.h"
#include <Keypad.h>

// ================= KEYPAD CONFIG =================
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {13, 12, 14, 27};
byte colPins[COLS] = {26, 25, 33, 32};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// ================= PIN STORAGE =================
String inputPIN = "";

void Keypad_Init() {
  Serial.println("Keypad ready");
}

char Keypad_GetKey() {
  return keypad.getKey();
}

String Keypad_GetPIN() {
  char key = keypad.getKey();

  if (key) {
    if (key == '#') {
      String result = inputPIN;
      inputPIN = "";
      return result;
    }
    else if (key == '*') {
      inputPIN = "";
      return "";
    }
    else {
      inputPIN += key;
    }
  }

  return "";
}
