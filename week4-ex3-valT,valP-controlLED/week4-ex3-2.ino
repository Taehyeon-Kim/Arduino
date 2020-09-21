//Temperature Alert! 
const int BLED=9; 
const int GLED=10; 
const int RLED=11; 
const int TEMP=0;
const int POTEN=1;

const int LOWER_BOUND=152; //Lower Threshold 
const int UPPER_BOUND=155; //Upper Threshold

int valP = 0; //Variable to hold analog reading
int valT = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode (BLED, OUTPUT); //Set Blue LED as Output 
  pinMode (GLED, OUTPUT); //Set Green LED as Output 
  pinMode (RLED, OUTPUT); //Set Red LED as Output
}

void loop()
{
  valP = analogRead(TEMP);
  valT = analogRead(POTEN);
  int pwm = (valT/1023.0 * 255 + 0.5); // PWM 값
  
  Serial.println(valP);
  Serial.println(valT);
  Serial.println(pwm);
  Serial.println("");
  delay(500);

  if(valP < 350)
  {
    analogWrite(RLED, pwm);
    digitalWrite(BLED, HIGH);
    digitalWrite(GLED, HIGH);
  }
  else if (350 <= valP && valP <= 700)
  {
    digitalWrite(RLED, HIGH);
    analogWrite(BLED, pwm);
    digitalWrite(GLED, HIGH);
  }
  else
  {
    digitalWrite(RLED, HIGH);
    digitalWrite(BLED, HIGH);
    analogWrite(GLED, pwm);
  }
  
//  if(val < LOWER_BOUND)
//  {
//    digitalWrite(RLED,HIGH);
//    digitalWrite(GLED,HIGH);
//    digitalWrite(BLED,LOW);
//  }
//  else if(val > UPPER_BOUND)
//  {
//    digitalWrite(RLED,LOW);
//    digitalWrite(GLED,HIGH);
//    digitalWrite(BLED,HIGH);
//  }
//  else
//  {
//    digitalWrite(RLED,HIGH);
//    digitalWrite(GLED,LOW);
//    digitalWrite(BLED,HIGH);
//  }
}
