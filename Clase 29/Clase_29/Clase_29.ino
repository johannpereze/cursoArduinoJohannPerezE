int pinButton1 = 3;
int pinButton2 = 2;
int ledPin = 9;
int buzzPin = 8;
int buttonNew1;
int buttonNew2;
int dt = 100;
int ledBright = 0;
int buzzDelay = 200;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinButton1, INPUT);
  pinMode(pinButton2, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew1 = digitalRead(pinButton1);
  buttonNew2 = digitalRead(pinButton2);
  Serial.print("Boton 1 = ");
  Serial.print(buttonNew1);
  Serial.print(" Boton 2 = ");
  Serial.println(buttonNew2);
  Serial.print("Brillo: ");
  Serial.println(ledBright);
  delay(dt);

  if(buttonNew1 == 0){
    ledBright = ledBright -15;
    analogWrite(ledPin, ledBright);
  }
  if(buttonNew2 == 0){
    ledBright = ledBright + 15;
    analogWrite(ledPin, ledBright);
  }
  if (ledBright < 0){
    ledBright = 0;
    digitalWrite(buzzPin, HIGH);
    delay(buzzDelay);
    digitalWrite(buzzPin, LOW);
  }
  if (ledBright > 255){
    ledBright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(buzzDelay);
    digitalWrite(buzzPin, LOW);
  }
}

