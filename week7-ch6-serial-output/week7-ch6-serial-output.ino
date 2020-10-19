void setup() {
  Serial.begin(9600);
}

void loop() {
  /* basic */
//  Serial.println(78);          //78 (int)
//  Serial.println("78");        //78 (string)
//  Serial.println(1.23);        //1.23 (float)
//  Serial.println(1.23456);     //1.23 (2자리 반올림)
//  Serial.println(1.56789);     //1.57 (//)
//  Serial.println("1.23456");   //1.23456
//  Serial.println(N);           //error
//  Serial.println('N');         //N (char)
//  Serial.println("N");         //N (string)
//  Serial.println('NN');        //쓰레기값 (char 문자 하나만)
//  Serial.println("NN");        //NN (string)

  /* Data Type Conversion */
    // default == DEC
//  Serial.println(78, BIN);     //1001110
//  Serial.println(78, OCT);     //116
//  Serial.println(78, DEC);     //78
//  Serial.println(78, HEX);     //4E
    // default == 2
//    Serial.println(1.23456,0); //1
//    Serial.println(1.23456,2); //1.23
//    Serial.println(1.23456,4); //1.2346 
  
}
