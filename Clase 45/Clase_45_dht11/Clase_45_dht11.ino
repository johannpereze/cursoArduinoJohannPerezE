#include <DHT.h>
#include <DHT_U.h>

#define Type DHT11
int dhtPin = 2;
DHT HT(dhtPin, Type);
int humidity;
float tempC;
float tempF;
int dt (500);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  HT.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
  Serial.print("Humedad Relativa: ");
  Serial.print(humidity);
  Serial.print("% / Temperatura: ");
  Serial.print(tempC);
  Serial.print("ºC / ");
  Serial.print(tempF);
  Serial.println("ºF");
  delay(dt);
}
