#include "rfid_module.h"
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 5
#define RST_PIN 16

MFRC522 rfid(SS_PIN, RST_PIN);

void RFID_Init() {
  SPI.begin();
  rfid.PCD_Init();
  Serial.println("RFID initialized");
}

bool RFID_Check() {
  if (!rfid.PICC_IsNewCardPresent()) return false;
  if (!rfid.PICC_ReadCardSerial()) return false;

  Serial.print("RFID UID: ");

  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.print(rfid.uid.uidByte[i], HEX);
    Serial.print(" ");
  }

  Serial.println();

  return true;
}
