int analogPin = A0;
float V2;
int dt = 500;
int analogVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogVal = analogRead(analogPin);
  V2 = (5.*analogVal) / 1023.;
  Serial.println(V2);
  delay(dt);
}
