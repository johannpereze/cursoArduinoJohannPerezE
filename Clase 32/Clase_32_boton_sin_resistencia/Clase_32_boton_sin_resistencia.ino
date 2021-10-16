//int pinButton = 8;
//int buttonVal;
//int dt = 100;
//
//void setup() {
//  // put your setup code here, to run once:
//pinMode(pinButton, INPUT);
//digitalWrite(pinButton, HIGH);
//Serial.begin(9600);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//buttonVal = digitalRead(pinButton);
//Serial.println(buttonVal);
//delay(dt);
//}

int pinButton = 8;
int buttonVal;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(pinButton, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal = digitalRead(pinButton);
Serial.println(buttonVal);
delay(dt);
}
