int potPin = A1;
int ledPin = 2;
int potVal;
int dt = 400;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(dt);

  while (potVal > 1000) {
    digitalWrite(ledPin, HIGH);
    Serial.println(potVal);
    potVal = analogRead(potPin);
    delay(dt);
  }
  digitalWrite(ledPin, LOW);

}
