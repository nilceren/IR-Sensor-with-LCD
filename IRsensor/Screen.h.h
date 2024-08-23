#ifndef SCREEN_H
#define SCREEN_H

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

class Screen {
  public:
    int distance_cm;
    void init();
    void show();
  
  private:
    LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);
};

#endif
