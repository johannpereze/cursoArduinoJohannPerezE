#include <IRremote.h>
int IRpin = 9;
int rPin = 3;
int gPin = 5;
int bPin = 6;
int state = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  while (IrReceiver.decode() == 0) {

  }
  int comand = IrReceiver.decodedIRData.command;
  Serial.println(comand);
  delay(500);
  IrReceiver.resume();

  if (comand == 67) {
    if (state == 0) {
      state = 1;
    }
    else {
      state = 0;
    }
  }
  digitalWrite(rPin, state);
  digitalWrite(gPin, state);
  digitalWrite(bPin, state);
}
