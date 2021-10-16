int dot = 100;
int dash = 300;
int ledPin = 7;
int finalDelay = 1500;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);
digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);
digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);

digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);

digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);
digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);
digitalWrite(ledPin,HIGH);
delay(dot);
digitalWrite(ledPin,LOW);
delay(dot);

delay(finalDelay);

}
