int speedPin=11;
int dirPin1=12;
int dirPin2=13;
int speedMotor= 90;
int dt = 100;
int dt2 = 5000;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(speedPin,OUTPUT);
  pinMode(dirPin1,OUTPUT);
  pinMode(dirPin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dirPin1,0);
digitalWrite(dirPin2,1);
analogWrite(speedPin, 255);
delay(dt);
analogWrite(speedPin, speedMotor);
delay(dt2);
}
