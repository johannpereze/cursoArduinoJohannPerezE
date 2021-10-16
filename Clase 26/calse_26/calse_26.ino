int lightVal;
float delayTime;
int lightPin = A3;
int buzzPin = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(lightPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  delayTime=(9./400.)*(lightVal-300.)+1;
  Serial.println(lightVal);
  digitalWrite(buzzPin, HIGH);
  delay(delayTime);
  digitalWrite(buzzPin, LOW);
  delay(delayTime);
}
