int speedPin = 11;
int dirPin1 = 12;
int dirPin2 = 13;
int speedMotor;
int dt = 100;
int dt2 = 5000;
int yPin = A1;
int yVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(speedPin, OUTPUT);
  pinMode(dirPin1, OUTPUT);
  pinMode(dirPin2, OUTPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  yVal = analogRead(yPin);
  Serial.println(yVal);

  if (yVal > 550) {
    speedMotor = map(yVal,550,1023,0,255);
    digitalWrite(dirPin1, 0);
    digitalWrite(dirPin2, 1);
    analogWrite(speedPin, speedMotor);
  }
  if (yVal <= 550) {
    speedMotor = map(yVal,550,0,0,255);
    digitalWrite(dirPin1, 1);
    digitalWrite(dirPin2, 0);
    analogWrite(speedPin, speedMotor);
  }

}
