#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SENSOR_PIN A0

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture Sensor");

  lcd.setCursor(0, 2);
  lcd.print("Value: ");
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);

  lcd.setCursor(7, 2);
  lcd.print(sensorValue + '              ');

  delay(1000);
}
