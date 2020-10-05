// photoregister(조도센서, 광센서, cds) 연습

const int RLED = 9;
const int LIGHT = 0;
const int MIN_LIGHT = 430;
const int MAX_LIGHT = 900;
int val = 0;

void setup() {
  pinMode(RLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(LIGHT);
  val = map(val, MIN_LIGHT, MAX_LIGHT, 0, 255);
  val = constrain(val, 0, 255);
  
  analogWrite(RLED, val);
  Serial.println(val);
  delay(500);
}
