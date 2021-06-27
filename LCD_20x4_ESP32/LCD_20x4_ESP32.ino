/*
 * Ejemplo ESP32-s y pantalla lcd
 */
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);
void setup() {
  lcd.begin();
  lcd.backlight();

  lcd.setCursor (0, 0);
  lcd.print(" Pantalla lcd 20x4  ");
  lcd.setCursor (0, 1);
  lcd.print("       esp32-s      ");
  
}

void loop() {
  lcd.setCursor (0, 3);
  lcd.print("Tiempo activo:");
  lcd.print(millis()/1000);
  lcd.print("s");
  delay(1000);
}
