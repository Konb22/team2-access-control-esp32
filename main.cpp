#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("READY"); // маркер запуска системы

  // TODO: init RFID
  // TODO: init keypad
  // TODO: init OLED
  // TODO: init RTC
  // TODO: init servo
}

void loop() {
  // TODO: main state machine

  delay(10);
}
