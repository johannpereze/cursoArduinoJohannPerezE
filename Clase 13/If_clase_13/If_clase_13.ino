float V2;
int readVal;
int analogPin = A2;
int ledPin = 10;
int dt = 200;

void setup() {
 Serial.begin(9600);
 pinMode(analogPin, INPUT); 
 pinMode(ledPin, OUTPUT);

}
// < - > - <= - >= - == - != - && - ||
void loop() {
 readVal = analogRead(analogPin);
 V2 = (5.*readVal)/1023.;
  if (V2>=2.0 && V2<=4.0) {
    digitalWrite(ledPin,HIGH);
  }
  if (V2<2.0 || V2>4.0){
    digitalWrite(ledPin,LOW);
  }
 
 Serial.println(V2);
 delay(dt);

}
