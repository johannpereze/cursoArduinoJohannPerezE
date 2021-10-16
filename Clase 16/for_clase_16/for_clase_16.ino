int i;
int delayTime = 400;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=10;i>=0;i=i-1){
    Serial.println(i);
    delay(delayTime);
  }
  Serial.println();
}
