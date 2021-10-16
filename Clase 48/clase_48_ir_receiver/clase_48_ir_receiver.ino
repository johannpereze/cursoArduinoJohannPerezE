#include <IRremote.h>
int IRpin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(IRpin);
}

void loop() {
  while (IrReceiver.decode() == 0) {

  }
  Serial.println(IrReceiver.decodedIRData.command);
  delay(500);
  IrReceiver.resume();

}
