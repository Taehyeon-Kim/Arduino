const int R = 11;
const int G = 10;
const int B = 9;

int cmd = 0; // cmd number(#) - loop

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
  while(Serial.available() > 0)
  {
    // parseInt
    rColor = Serial.parseInt();
    gColor = Serial.parseInt();
    bColor = Serial.parseInt();

    // print
    Serial.print(rColor);
    Serial.print(",");
    Serial.print(gColor);
    Serial.print(",");
    Serial.println(bColor);

    // input done
    if(Serial.read() == '\n')
    {
      analogWrite(R, rColor);
      analogWrite(G, gColor);
      analogWrite(B, bColor);
    }

    
  }

}
