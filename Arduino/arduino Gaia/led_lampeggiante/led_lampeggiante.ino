void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
}
void loop() {
if (digitalRead(4)) {
  // do Thing A
  digitalWrite(2, HIGH);
}
else {
  // do Thing C
  digitalWrite(2, LOW);
} }
