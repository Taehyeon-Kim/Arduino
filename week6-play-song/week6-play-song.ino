#include "pitches.h"

const int SPEAKER = 9; // speaker pin - output pin

// LED control
int LEDs[] = {
  1, 2, 3, 4, 5, 6, 7, 8
};

// 도레미파솔라시도 도시라솔파미레도
int test_notes[] = {
  NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_C5,
  NOTE_C5,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_C4,
};

int notes[] = {
  NOTE_C4,NOTE_D4,NOTE_E4,NOTE_C4,NOTE_D4,NOTE_E4,
  NOTE_A4,NOTE_A4,NOTE_A4,NOTE_G4,0,
  NOTE_F4,NOTE_F4,NOTE_F4,NOTE_E4,NOTE_E4,NOTE_E4,
  NOTE_D4,NOTE_D4,NOTE_D4,NOTE_C4,0
};

int times[] = {
  250, 250, 250, 250, 250, 250,
  250, 250, 250, 250, 250,
  250, 250, 250, 250, 250, 250,
  250, 250, 250, 250, 250
};

void setMode(int note)
{
  switch(note)
  {
    case NOTE_C4:
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case NOTE_D4:
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case NOTE_E4:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case NOTE_F4:
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case NOTE_G4:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case NOTE_A4:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      break;
    case NOTE_B4:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      break;
    case NOTE_C5:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      break;
  }
  
};

// 똑같아요 노래
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
    for(int i = 0; i<sizeof(test_notes)/sizeof(int); i++)
  {

    setMode(test_notes[i]);
    tone(SPEAKER, test_notes[i], times[i]);
    

    delay(times[i]);
  }
}
