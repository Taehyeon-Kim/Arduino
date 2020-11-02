#include<LiquidCrystal.h>

int time = 0;

LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
  lcd.begin(16,2);
  lcd.print("Jeremy'sDisplay");
}

void loop() {
  lcd.setCursor(0,1);
  lcd.print(time);

  delay(1000);
  time++;
}
