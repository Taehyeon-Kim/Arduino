const int R = 11;
const int G = 10;
const int B = 9;

int cmd = 0; // cmd number(#) - loop
int ledNum = 0;
int rgbColor = 0;

// rgb value
int rColor = 0;
int bColor = 0;
int gColor = 0;

void setup() {
  Serial.begin(9600);

  // pinMode
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  if(Serial.available() > 0) // buffer에 값 있는 동안
  {
    cmd = Serial.parseInt();

    for(int i=0; i<cmd; i++)
    {
      ledNum = Serial.parseInt();
      rgbColor = Serial.parseInt();

      if(ledNum == 0) rColor = rgbColor;
      else if(ledNum == 1) gColor = rgbColor;
      else if(ledNum == 2) bColor = rgbColor;
    }

    // debug 
    Serial.println(rColor);
    Serial.println(gColor);
    Serial.println(bColor);

    analogWrite(R, rColor);
    analogWrite(G, gColor);
    analogWrite(B, bColor);
  }

}
