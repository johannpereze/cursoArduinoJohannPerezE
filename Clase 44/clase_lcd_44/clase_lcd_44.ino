#include <LiquidCrystal.h>
int rs = 12;
int e = 11;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;
int numero = 0;
float firstN;
float secondN;
float result;
String operatorN;

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 0);
  lcd.print("Ingresa 1er Num");
  while (Serial.available() == 0) {

  }
  firstN = Serial.parseFloat();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Ingresa 2do Num");
  while (Serial.available() == 0) {

  }
  secondN = Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Que Operacion?");
  lcd.setCursor(0, 1);
  lcd.print("+ - * /");
  while (Serial.available() == 0) {

  }
  operatorN = Serial.readString();
  lcd.clear();

  if (operatorN == "+" ) {
    result = firstN + secondN;
  }
  if (operatorN == "-") {
    result = firstN - secondN;
  }
  if (operatorN == "*") {
    result = firstN * secondN;
  }
  if (operatorN == "/") {
    result = firstN / secondN;
  }

  lcd.setCursor(0, 0);
  lcd.print("Tu operacion es:");
  lcd.setCursor(0, 1);
  lcd.print(firstN);
  lcd.print(operatorN);
  lcd.print(secondN);
  lcd.print("=");
  lcd.print(result);
  delay(10000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Gracias");
  delay(2000);
  lcd.clear();
}
