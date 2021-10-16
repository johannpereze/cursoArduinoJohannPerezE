int latchPin= 8;
int clockPin = 13;
int dataPin = 12;
byte myByte = 0b10101010;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

//128 64 32 16 8 4 2 1
//
//BINARIOS              DECIMALES
//10100000               160
//01010000                80
//00101000                40


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin,clockPin,LSBFIRST, myByte);
  digitalWrite(latchPin, HIGH);
  Serial.println(myByte, BIN);
  delay(dt);
  myByte = myByte*2;
  
  
}
