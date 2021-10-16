#include <IRremote.h>
int IRpin = 9;
int rPin = 3;
int gPin = 5;
int bPin = 6;
int state = 0;
int rVal = 255;
int gVal = 255;
int bVal = 255;
float bright = 1;

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

  if (comand == 12) {
    rVal = 255;
    gVal = 0;
    bVal = 0;
  }
  if (comand == 24) {
    rVal = 0;
    gVal = 255;
    bVal = 0;
  }
  if (comand == 94) {
    rVal = 0;
    gVal = 0;
    bVal = 255;
  }
  if (comand == 8) {
    rVal = 255;
    gVal = 0;
    bVal = 255;
  }
  if (comand == 28) {
    rVal = 0;
    gVal = 255;
    bVal = 255;
  }
  if (comand == 90) {
    rVal = 255;
    gVal = 255;
    bVal = 0;
  }
  if (comand == 21) {
    bright = bright + 0.25;
    if (bright > 1) {
      bright = 1;
    }
  }
  if (comand == 7) {
    bright = bright - 0.25;
    if (bright < 0.25) {
      bright = 0.25;
    }
  }


  analogWrite(rPin, rVal *bright);
  analogWrite(gPin, gVal *bright);
  analogWrite(bPin, bVal *bright);
  //  Serial.println(rVal);
  Serial.println(bright);
  //  Serial.println(state);
  //  Serial.print(rVal * bright * state); gPin, gVal * bright * state
}
