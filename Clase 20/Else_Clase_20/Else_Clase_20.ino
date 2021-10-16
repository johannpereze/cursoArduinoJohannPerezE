int greenPin = 13;
int redPin = 12;
int bluePin = 11;
int ledColor;
String msg1 = "Escribe un color de led";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println(msg1);
  while (Serial.available() == 0) {

  }

  ledColor = Serial.parseInt();

  switch (ledColor) {
    
    case 1:
      digitalWrite(greenPin, HIGH);
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, LOW);
      break;

    case 2:
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, HIGH);
      digitalWrite(bluePin, LOW);
      break;

    case 3:
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, HIGH);
      break;

    default:
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, LOW);
      digitalWrite(bluePin, LOW);
      Serial.println("El valor es incorrecto. Intenta de nuevo");
    

  }


  //if (ledColor == "verde"){
  //  digitalWrite(greenPin,HIGH);
  //  digitalWrite(redPin,LOW);
  //  digitalWrite(bluePin,LOW);
  //
  //}
  //else if (ledColor == "rojo"){
  //  digitalWrite(greenPin,LOW);
  //  digitalWrite(redPin,HIGH);
  //  digitalWrite(bluePin,LOW);
  //
  //}
  //else if (ledColor == "azul"){
  //  digitalWrite(greenPin,LOW);
  //  digitalWrite(redPin,LOW);
  //  digitalWrite(bluePin,HIGH);
  //
  //}
  //
  //else {
  //  digitalWrite(greenPin,LOW);
  //  digitalWrite(redPin,LOW);
  //  digitalWrite(bluePin,LOW);
  //  Serial.println("El valor es incorrecto. Intenta de nuevo");
  //
  //}

}
