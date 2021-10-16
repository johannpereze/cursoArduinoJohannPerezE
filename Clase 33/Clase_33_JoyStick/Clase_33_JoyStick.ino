int xPin = A0;
int yPin = A1;
int buttonPin = 7;
int buttonVal;
int buzzPin = 8;
int xVal;
int yVal;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  buttonVal = digitalRead(buttonPin);
  Serial.print("Valor X = ");
  Serial.print(xVal);
  Serial.print(" - Valor Y = ");
  Serial.print(yVal);
  Serial.print(" - Valor Botón = ");
  Serial.println(buttonVal);
  delay(dt);
  if (buttonVal == 0){
    digitalWrite(buzzPin, 1); 
  }
  else{
    digitalWrite(buzzPin, 0); 
  }
}
