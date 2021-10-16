int buzzPin = 4;
float buzzDelay;
int potPin = A4;
int potVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);

  buzzDelay=(9940./1023.)*potVal+60;
  
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzDelay);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzDelay);

  Serial.println(potVal);


}
