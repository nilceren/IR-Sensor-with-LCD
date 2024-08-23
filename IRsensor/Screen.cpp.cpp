#include "Screen.h"

void Screen::init() {
  lcd.init();         
  lcd.clear();        
  lcd.backlight();    
}

void Screen::show() {
  lcd.setCursor(0, 0); /
  lcd.print("Mean distance");
  lcd.setCursor(0, 1); 
  lcd.print(distance_cm);
  lcd.print(" cm");
}
