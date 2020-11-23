#include <TimerOne.h>

const int R = 8;
const int G = 11;
const int B = 12;
const int Y = 13;

const int LED = 13;
boolean state = HIGH;

int count = 0;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(Y, OUTPUT);

  digitalWrite(R, 255); digitalWrite(G, 255); digitalWrite(B, 255); digitalWrite(Y, 255);
  
  Timer1.initialize(1000000);
  Timer1.attachInterrupt(blinky);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void blinky()
{
  if(count == 16)
  {
    count = 0;
  }
  ++count;
  
  if(count == 2 || count == 4 || count == 6 || count == 8 || count == 10 || count == 12 || count == 14 || count == 16)
  {
    state = !state;
    digitalWrite(R, state);
  }
    
  if (count == 4 || count == 8 || count == 12 || count == 16)
  {
    state = !state;
    digitalWrite(G, state);
  }

  if (count == 8 || count == 16)
  {
    state = !state;
    digitalWrite(B, state);
  }
    
  if (count == 16)
  {
    state = !state;
    digitalWrite(Y, state);
  }
}
