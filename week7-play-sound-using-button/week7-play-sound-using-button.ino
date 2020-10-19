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

  Serial.begin(9600); //serial init
}

void loop() {
//  int times = 0;
//  unsigned int times = 0;//  unsigned int times = 0;
  char notes = '\0'; // character initialize
  unsigned long times = 0; // 반복 시 오류 없이 동작 

  while(!digitalRead(BUTTON_C)) {
    times++;
    tone(SPEAKER, NOTE_C);  
    notes = 'C';
  }
  while(!digitalRead(BUTTON_D)) {
    times++;
    tone(SPEAKER, NOTE_D);
    notes = 'D';  
  }
  while(!digitalRead(BUTTON_E)) {
    times++; 
    tone(SPEAKER, NOTE_E);  
    notes = 'E';
  }
  while(!digitalRead(BUTTON_F)) {
    times++;
    tone(SPEAKER, NOTE_F);  
    notes = 'F';
  }
  while(!digitalRead(BUTTON_G)) {
    times++;
    tone(SPEAKER, NOTE_G);  
    notes = 'G';
  }
  
  // print
  if(times){
    // %c, %d 불가 
    Serial.print("Note:\t");
    Serial.print(notes);
    Serial.print("\t\t");
    Serial.print("Times:\t");
    Serial.println(times);
  }
  

  noTone(SPEAKER);
}
