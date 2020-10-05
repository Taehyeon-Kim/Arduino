/* 스위치로 전구 불빛 제어 (R,G,B) 
 * 조도센서 이용해서 밝기 제어
 * 이전 단계의 복습이 확실히 필요
*/


const int RLED = 9;
const int GLED = 10;
const int BLED = 11;
const int BUTTON = 2;

boolean lastButton = LOW;
boolean currentButton = LOW;
int ledMode = 0;

const int LIGHT = 0;
const int MIN_LIGHT = 430;
const int MAX_LIGHT = 900;
int val = 0;
int btn_val = 0;

void setup() {
  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

boolean debounce(boolean last)
{
  boolean current = digitalRead(BUTTON);
  if (last != current)
  {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}

void setMode(int mode, int val)
{
  if (mode == 1)
  {
//    digitalWrite(RLED, LOW);
    analogWrite(RLED, val);
    digitalWrite(GLED, HIGH);
    digitalWrite(BLED, HIGH);
  }

  else if (mode == 2)
  {
    digitalWrite(RLED, HIGH);
//    digitalWrite(GLED, LOW);
    analogWrite(GLED, val);
    digitalWrite(BLED, HIGH);
  }

  else if (mode == 3)
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(GLED, HIGH);
//    digitalWrite(BLED, LOW);
    analogWrite(BLED, val);
  }
}

void loop() {

  // 밝기는 val로 컨트롤 가능
  // min = 0 , max = 255
  val = analogRead(LIGHT);
  val = map(val, MIN_LIGHT, MAX_LIGHT, 0, 255);
  val = constrain(val, 0, 255);

  currentButton = debounce(lastButton);
  if(lastButton == LOW && currentButton == HIGH)
  {
    ledMode++;
  }
  lastButton = currentButton;

  if (ledMode == 4) ledMode = 0;

  setMode(ledMode, val);
}
