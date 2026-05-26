#include "rfid_module.h"
#include "oled_module.h"
#include "keypad_module.h"

// ================= SETUP =================
void setup() {
  Serial.begin(115200);

  OLED_Init();
  Keypad_Init();
  RFID_Init();

  OLED_Show("System Ready");
}

// ================= LOOP =================
void loop() {

  // 1. RFID check
  bool rfidOK = RFID_Check();

  // 2. PIN input
  String pin = Keypad_GetPIN();

  // 3. Decision logic
  if (rfidOK && pin == "1234") {
    OLED_Show("ACCESS GRANTED");
    Serial.println("OPEN LOCK");
  }
  else if (pin != "") {
    OLED_Show("ACCESS DENIED");
    Serial.println("DENIED");
  }

  delay(200);
}
