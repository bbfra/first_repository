int redpin = 8;
int greenpin = 10;
int bluepin = 12;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12, OUTPUT);
 // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(8,random(256));
delay(500);
analogWrite(10, random(130));
delay(500);
analogWrite(12, random(256));
delay(500);
}
