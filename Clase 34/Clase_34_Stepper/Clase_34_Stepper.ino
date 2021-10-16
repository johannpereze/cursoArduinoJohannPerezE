#include <Stepper.h>
int stepsPerRevolution = 2048;
int motSpeed = 12;
Stepper myStepper(stepsPerRevolution,8,10,9,11);
int dt = 1500;

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRevolution);
  delay(dt);
  myStepper.step(-stepsPerRevolution);
  delay(dt);
  
}
