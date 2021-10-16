int blueLed = 9;
int brightness1 =0;
int brightness2 =125;
int brightness3 =255;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(blueLed, brightness1);
delay(dt);
analogWrite(blueLed, brightness2);
delay(dt);
analogWrite(blueLed, brightness3);
delay(dt);
}
