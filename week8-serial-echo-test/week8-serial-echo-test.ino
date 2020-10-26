char data; // 반드시 캐릭터로 선언해야 함, int 불가 


void setup() {
  Serial.begin(9600);
}

// new line(= '\n') - ASCII code val = 10
void loop() {
  if(Serial.available() > 0)
  {
    data = Serial.read();
    Serial.print(data);
  }
}
