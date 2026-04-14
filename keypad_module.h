#ifndef KEYPAD_MODULE_H
#define KEYPAD_MODULE_H

#include <Arduino.h>

void Keypad_Init();
char Keypad_GetKey();
String Keypad_GetPIN();

#endif
