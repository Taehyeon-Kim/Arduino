#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330 
#define NOTE_G 392
#define NOTE_A 440
#define NOTE_F 349

const int SPEAKER = 9; // output pin 9

const int BUTTON_C = 7;
const int BUTTON_D = 6;
const int BUTTON_E = 5;
const int BUTTON_F = 4;
const int BUTTON_G = 3;
//const int BUTTON_G = 4;
//const int BUTTON_A = 3;

void setup() {
  //pinMode INPUT_PULLUP
  pinMode(SPEAKER, OUTPUT);
  pinMode(BUTTON_C, INPUT_PULLUP);
  pinMode(BUTTON_D, INPUT_PULLUP);
  pinMode(BUTTON_E, INPUT_PULLUP);
  pinMode(BUTTON_F, INPUT_PULLUP);
  pinMode(BUTTON_G, INPUT_PULLUP);
}

void loop() {
  while(!digitalRead(BUTTON_C)) tone(SPEAKER, NOTE_C);
  while(!digitalRead(BUTTON_D)) tone(SPEAKER, NOTE_D);
  while(!digitalRead(BUTTON_E)) tone(SPEAKER, NOTE_E);
  while(!digitalRead(BUTTON_F)) tone(SPEAKER, NOTE_F);
  while(!digitalRead(BUTTON_G)) tone(SPEAKER, NOTE_G);

  noTone(SPEAKER);
}
