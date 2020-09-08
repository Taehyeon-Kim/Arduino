// Loop가 2개!
// i와 j 사용!
// 9,10,11 셋 다 ~(물결표시)가 있음 -> PWM 사용

const int RLED=9;
const int GLED=10;
const int BLED=11;

void setup() {
  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);
}

void loop() {
  for(int i=100 ; i>=0 ; i-=20)
  {
    //=PWM 값; Duty Cycle은 mapping 필요
    int val = (i/100.0 * 255 + 0.5); 
    
    for(int j=300 ; j>=100 ; j-=100)
    {
       analogWrite(RLED, val);
       analogWrite(GLED, 0);
       analogWrite(BLED, 0);

       delay(j);
       
       analogWrite(RLED, 0);
       analogWrite(GLED, val);
       analogWrite(BLED, 0);

       delay(j);
       
       analogWrite(RLED, 0);
       analogWrite(GLED, 0);
       analogWrite(BLED, val);

       delay(j);
    }
  }
}
