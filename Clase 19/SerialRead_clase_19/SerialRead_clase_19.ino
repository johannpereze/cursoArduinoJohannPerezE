//String myName;
//String msg1 = "Escribe tu nombre";
//String msg2 = "Hola, ";
//String msg3 = ". Bienvenido a el mejor curso de Arduino";
//
//
//void setup() {
//  // put your setup code here, to run once:
//Serial.begin(115200);
//
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//Serial.println();
//Serial.println(msg1);
//while (Serial.available() == 0){
//  
//}
//
//myName = Serial.readString();
//Serial.print(msg2);
//Serial.print(myName);
//Serial.println(msg3);
//
//}

int greenPin = 13;
int redPin = 12;
int bluePin =11;
String ledColor;
String msg1 = "Escribe un color de led";


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println();
Serial.println(msg1);
while (Serial.available() == 0){
  
}

ledColor = Serial.readString();

if (ledColor == "verde" || ledColor == "VERDE"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  
}
if (ledColor == "rojo" || ledColor == "ROJO"){
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(bluePin,LOW);
  
}
if (ledColor == "azul" || ledColor == "AZUL"){
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,HIGH);
  
}

}
