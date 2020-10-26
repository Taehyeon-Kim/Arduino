const int B = 9;
const int G = 10;
const int R = 11;
char data;

// state variable (to check toggle)
bool R_state;
bool G_state;
bool B_state; 

void setup() {
  Serial.begin(9600);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  if(Serial.available() > 0)
  {
    data = Serial.read(); // data 0 ~ 4
    if (data == '0'){
      R_state = 0; G_state = 0; B_state = 0;
    } 
    else if (data == '1'){
      R_state = !R_state;
    } 
    else if (data == '2'){
      G_state = !G_state;
    } 
    else if (data == '3'){
      B_state = !B_state;
    } 
    else if (data == '4') {
      R_state = 1; G_state = 1; B_state = 1;
    }

    // state 자체를 digitalWrite로 넣을 수 있음
    // LOW = 0, HIGH = 1
    digitalWrite(R, R_state);
    digitalWrite(G, G_state);
    digitalWrite(B, B_state);
  }

}
