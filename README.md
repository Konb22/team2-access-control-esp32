# 🔐 СКУД: Дверь с PIN + RFID (ESP32)

## 📌 Описание проекта

Данный проект представляет собой прототип системы контроля и управления доступом (СКУД) на базе ESP32 с использованием C++ (Arduino framework).  
Система реализует двухфакторную аутентификацию (PIN + RFID), управление доступом и журналирование событий.  

Проект демонстрирует работу встроенных систем, конечных автоматов состояний и базовых принципов информационной безопасности.

---

## 👥 Команда и роли

- Яценко Владислав — Team Lead / Backend logic / RFID module
- Никита Аржанов — Hardware integration / Keypad / Servo control
- Илья Горячев — UI (OLED) / RTC / Logging system

---

## 🎯 MVP (минимально жизнеспособный продукт)

- Двухфакторная аутентификация (PIN + RFID)
- Управление доступом через сервопривод (открытие/закрытие двери)
- Журнал событий с временными метками (RTC)

---

## 🚀 Как запустить проект (Wokwi)

### 🔧 Вариант 1: Wokwi Web
1. Открыть https://wokwi.com/
2. Создать новый проект ESP32 (Arduino)
3. Загрузить файлы:
   - `main.cpp`
   - `diagram.json`
4. Нажать ▶ Start Simulation

### 🔧 Вариант 2: Wokwi for VS Code
1. Установить расширение Wokwi
2. Открыть проект в VS Code
3. Запустить симуляцию через Wokwi extension

---

## 📁 Структура проекта

```
/
├── main.cpp
├── diagram.json
├── README.md
├── docs/
│   └── architecture.md
├── tests/
│   └── (empty)
```

---

## 🧠 Архитектура системы

Система построена на конечном автомате состояний:

- WAIT_CARD — ожидание RFID карты  
- WAIT_PIN — ввод PIN-кода  
- AUTH_SUCCESS — доступ разрешён  
- AUTH_FAIL — отказ в доступе  
- LOCKED — блокировка системы  

---

## 🔗 GitHub Projects

📌 Доска задач:  
[https://github.com/USERNAME/REPO/projects](https://github.com/users/Konb22/projects/1)
---

## ✅ Реализованные функции

В ходе проекта были реализованы следующие функции:

- RFID-аутентификация через MFRC522
- Ввод PIN-кода через Keypad 4x4
- OLED-интерфейс на SSD1306
- RTC DS1307 для временных меток
- Управление сервоприводом двери
- LED-индикация состояний
- Buzzer-уведомления
- Система ролей пользователей
- Блокировка после неверных попыток входа
- Журналирование событий
---

## 📦 Версия проекта

Текущая версия проекта: `v1.0`

Статус проекта: ✅ Завершён

Дата завершения проекта: 2026
---

## 🔮 Возможные улучшения

- Подключение базы данных пользователей
- Web-интерфейс администратора
- Wi-Fi синхронизация времени
- Облачное хранение журнала событий
- Мобильное приложение для управления доступом
- ---

## 🔗 Ссылки проекта

- GitHub Repository: [https://github.com/Konb22/team2-access-control-esp32](https://github.com/Konb22/team2-access-control-esp32)
- GitHub Projects: [https://github.com/users/Konb22/projects/1](https://github.com/users/Konb22/projects/1)
- Sprint Pull Requests: [https://github.com/Konb22/team2-access-control-esp32/pulls](https://github.com/Konb22/team2-access-control-esp32/pulls)
