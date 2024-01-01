#define rpin DO
void setup() {
  Serial.begin(115200);
  pinMode(rpin, OUTPUT);
}
void loop() {
  for (int i = 0; i < 255; i++) {
    analogWrite(rpin, i);
    delay(20);
    Serial.println(i);
  }
  analogWrite(rpin, LOW);
  delay(5000);
}