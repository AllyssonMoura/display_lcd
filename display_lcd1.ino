#include <LiquidCrystal.h>

LiquidCrystal lcd(9, 8, 5, 4, 3, 2);

void setup(){
  lcd.begin(16, 2);
}

void loop(){
  lcd.clear();
  delay(0);
  lcd.setCursor(7, 0);
  lcd.print("Teste");
  
  lcd.setCursor(5, 1);
  lcd.print("Teste");
  delay(1000);
}