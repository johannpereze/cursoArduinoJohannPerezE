#include <Servo.h>

int servoPin = 9;
int servoPos = 85;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Qué ángulo quieres?");
  while (Serial.available() == 0){
    
  }
  servoPos = Serial.parseInt();
  myServo.write(servoPos);
}
