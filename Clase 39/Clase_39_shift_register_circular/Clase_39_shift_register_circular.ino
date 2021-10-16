int latchPin= 8;
int clockPin = 13;
int dataPin = 12;
byte myByte = 0b10101111;
int dt = 2000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

//128 64 32 16 8 4 2 1
//
//BINARIO1              BINARIO2
//11110000              00001111  = 255
//11000000              00111111  = 255
//00000001              11111110  = 255


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte);
  digitalWrite(latchPin, HIGH);
  Serial.println(myByte, BIN);
  delay(dt);
  myByte = 255-myByte;
  
  
}
