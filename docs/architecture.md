# 🧠 Архитектура системы СКУД

## 📌 Платформа
- ESP32 (Arduino C++)
- Симуляция: Wokwi

---

## ⚙️ Планируемые компоненты

- RFID MFRC522 (SPI)
- Keypad 4x4 (GPIO)
- OLED SSD1306 (I2C)
- RTC DS1307 (I2C)
- Servo motor (PWM)

---

## 🔁 Логика системы (FSM)

Система построена на конечном автомате:

- WAIT_CARD — ожидание RFID
- WAIT_PIN — ввод PIN-кода
- AUTH_SUCCESS — доступ разрешён
- AUTH_FAIL — отказ
- LOCKED — блокировка после ошибок

---

## 🔌 Интерфейсы

- SPI → RFID
- I2C → OLED + RTC
- GPIO → Keypad + LED
- PWM → Servo
