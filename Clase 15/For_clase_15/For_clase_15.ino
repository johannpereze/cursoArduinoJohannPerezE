int yellowPin = 13;
int redPin = 12;
int dt = 500;
int yellow = 3;
int red = 5;
int i;



void setup() {
  // put your setup code here, to run once:
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (i = 1; i <= yellow; i = i + 1) {
    digitalWrite(yellowPin, HIGH);
    delay(dt);
    digitalWrite(yellowPin, LOW);
    delay(dt);
  }

  for (i = 0; i < red; i++) {
    digitalWrite(redPin, HIGH);
    delay(dt);
    digitalWrite(redPin, LOW);
    delay(dt);
  }
}
