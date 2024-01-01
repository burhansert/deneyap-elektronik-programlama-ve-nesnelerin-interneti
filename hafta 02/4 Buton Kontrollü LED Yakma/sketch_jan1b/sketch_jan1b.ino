#define led D1
#define buton D0
void setup() {
  pinMode(led, OUTPUT);
  pinMode(buton, INPUT);
}
void loop() {
  if (digitalRead(buton) == 1) {
    digitalWrite(led, HIGH);
  } else
    digitalWrite(led, LOW);
}