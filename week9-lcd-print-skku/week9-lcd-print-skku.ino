#include<LiquidCrystal.h>

int time = 0;

LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
  lcd.begin(16,2);
}

void loop() {
  for(int row=0; row<2; row++) // when reaching to the end, change row
  {
     for(int col=0; col<13; col++)
    {
      lcd.clear();
      lcd.setCursor(col,row);
      lcd.print("SKKU");
      delay(1000);
      
    }
  }

}
