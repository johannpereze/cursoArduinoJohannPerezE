#include <Servo.h>

int servoPin = 9;
int servoPos = 170;
int lightPin = A1;
int lightVal;
int dt = 50;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  servoPos=(170./500.)*(lightVal-500.);
  myServo.write(servoPos);
}
