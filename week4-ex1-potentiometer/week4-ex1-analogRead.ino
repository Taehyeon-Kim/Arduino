
const int GLED=9; //초록색 LED -> USE PWM
const int POT=0;
int val = 0;

void setup() {
  pinMode(GLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int pwm;
  val = analogRead(POT); // val 0 ~ 1023bit
  pwm = (val/1023.0 * 255 + 0.5); // PWM 값
  
  analogWrite(GLED, pwm); // LED 불빛 조절
  Serial.println(pwm);
  delay(500);
}
