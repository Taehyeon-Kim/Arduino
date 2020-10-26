# skku-arduino

□ SKKU Physical Computing Course with C Language.

### week4

- To-use potentiometer(가변저항)
- To-use TMP-36 sensor

### week5

- photoregister 연습
- button, phtoregister : RGB 색상 제어 및 밝기 제어

### week6

- exercise 1: speaker test
- exercise 2: pitches.h 헤더파일 추가 (음계에 대한 정보 저장), 7개의 LED에 불빛은 들어오나 연주의 끝부분이 뭉개짐.

### week7 (pinMode INPUT_PULLUP, 시리얼 통신: ch6 시작)

- exercise 1: pinMode(pin, INPUT_PULLUP)사용, Button 사용 시(저항 사용 안 함)
- exercise 1 : pull-up 상태이기 때문에 pull-down으로 변환해줘야 함(코드에서 수정)
- week7-ch6-serial-output : serial print 연습
- exercise 1 : Serial.print()문 추가

### week8 (시리얼 통신 사용, Serial.available(), Serial.read())

- echo test: 버퍼에 있는 값을 읽어오기 위해 char형 사용
- one LED control: 0, 1 toggle해서 led control, 0과 1을 시리얼 통신을 통해서 값 전달)
- three LED control: 1개를 사용하는 예제 좀 더 심화
- protocol 예제: cmd수에 따라서 parameter 값 조정 
