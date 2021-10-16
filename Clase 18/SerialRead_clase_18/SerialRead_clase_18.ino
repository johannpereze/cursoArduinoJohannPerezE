//int ledPin = 8;
//int blinkTimes;
//String msg1 = "Por favor ingresa el número de parpadeos: ";
//int i;
//int dt = 300;
//
//void setup() {
//  // put your setup code here, to run once:
//  Serial.begin(9600);
//  pinMode(ledPin,OUTPUT);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  Serial.println();
//  Serial.println(msg1);
//  while (Serial.available() == 0) {
//
//  }
//  blinkTimes = Serial.parseInt();
//
//  for (i = 1; i <= blinkTimes; i++) { //i = i + 1
//    digitalWrite(ledPin, HIGH);
//    delay(dt);
//    digitalWrite(ledPin, LOW);
//    delay(dt);
//  }
//}

//A=pi*Radio^2

float radius;
float pi = 3.1415;
float area;
String msg1 = "Escribe el radio de tu circunferencia: ";
String msg2 = "El área de tu circunferencia es de: ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.println(msg1);
  while (Serial.available() == 0) {

  }
  radius=Serial.parseFloat();
  area=pi*radius*radius;
  Serial.print(msg2);
  Serial.println(area);

}
