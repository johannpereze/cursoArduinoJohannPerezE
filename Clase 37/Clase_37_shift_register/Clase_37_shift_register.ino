int latchPin= 8;
int clockPin = 13;
int dataPin = 12;
byte myByte1 = 0b01010101;
byte myByte2 = 0b10101010;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte1);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte2);
  digitalWrite(latchPin, HIGH);
  delay(dt);
  
}
