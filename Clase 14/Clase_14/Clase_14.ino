int ledPin = 10;
int potPin = A2;
int potVal;
int dt = 200;
int light;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(potVal, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  Serial.println(light);
  light = map(potVal,0,1023,0,255);
  analogWrite(ledPin, light);
  delay(dt);
}
