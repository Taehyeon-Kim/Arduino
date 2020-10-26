const int LED = 9; // led pin
char data; // check buffer

void setup() {

  Serial.begin(9600); // set Serial
  pinMode(LED, OUTPUT); // output mode
}

void loop() {
  if(Serial.available() > 0) // 1입력시 ('1' + enter)
  {
    data = Serial.read();
    if(data == '1')
    {
      digitalWrite(LED, HIGH);
      delay(1000);
//      Serial.println("LED ON");
    }

    // else로 처리하면 1을 입력했을 때, 깜빡거리기만 함 - 엔터값도 버퍼에 들어가기 때문.
//    else //if(data == '0')
    else if(data == '0')
    {
      digitalWrite(LED, LOW);
      delay(1000);
//      Serial.println("LED OFF");
    }
  }
  
}
