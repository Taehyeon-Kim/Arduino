#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

byte p20[8] = {
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
  B10000,
};

byte p40[8] = {
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
};

byte p60[8] = {
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
  B11100,
};

byte p80[8] = {
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
  B11110,
};

byte p100[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};

// reverse
byte pr20[8] = {
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
  B00001,
};

byte pr40[8] = {
  B00011,
  B00011,
  B00011,
  B00011,
  B00011,
  B00011,
  B00011,
  B00011,
};

byte pr60[8] = {
  B00111,
  B00111,
  B00111,
  B00111,
  B00111,
  B00111,
  B00111,
  B00111,
};

byte pr80[8] = {
  B01111,
  B01111,
  B01111,
  B01111,
  B01111,
  B01111,
  B01111,
  B01111,
};

byte pr100[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
};

void setup() {
  lcd.begin(16,2);
//  lcd.print("Jeremy's Display");

  lcd.createChar(0, pr20);
  lcd.createChar(1, pr40);
  lcd.createChar(2, pr60);
  lcd.createChar(3, pr80);
  lcd.createChar(4, pr100);

//  lcd.createChar(5, pr20);
//  lcd.createChar(6, pr40);
//  lcd.createChar(7, pr60);
//  lcd.createChar(8, pr80);
//  lcd.createChar(9, pr100);
}

// createChar 7번까지 등록가능

void loop() {
//  // Case1
//  for(int i=0; i<16; i++) {
//    for(int j=0; j<5; j++) {
//      lcd.setCursor(i,0);
//      lcd.write(j);
//      lcd.setCursor(i,1);
//      lcd.write(j);
//      delay(100);
//    }  
//  }
//  lcd.clear();

//  Case 2
  for(int i=15; i>=0; i--) {
    for(int j=0; j<5; j++) {
      lcd.setCursor(i,0);
      lcd.write(j);
      lcd.setCursor(i,1);
      lcd.write(j);
      delay(100);
    }  
  }
  lcd.clear();
}
