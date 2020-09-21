// LOW, HIGH 측
const int POT=0;
int val = 0;
// low  150
// lb 152
// hb 153
// high 154

void setup() {
  Serial.begin(9600);
}

void loop() {
  val = analogRead(POT);
  Serial.println(val);
  delay(500);
}
