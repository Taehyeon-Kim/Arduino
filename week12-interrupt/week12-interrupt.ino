const int BUTTON_INT = 0;
const int RED = 11;
const int GREEN = 10;
const int BLUE = 9;

volatile int selectedLED = RED;


void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  attachInterrupt(BUTTON_INT, swap, RISING);
}

void swap() {
  analogWrite(selectedLED, 255);

  if(selectedLED == GREEN) selectedLED = RED;
  else if(selectedLED == RED) selectedLED = BLUE;
  else if(selectedLED == BLUE) selectedLED = GREEN;
}

void loop() {
  for(int i=0; i<256; i++)
  {
    analogWrite(selectedLED, i);
    delay(10);
  }

  for(int i=255; i>=0; i--)
  {
    analogWrite(selectedLED, i);
    delay(10);
  }
}
