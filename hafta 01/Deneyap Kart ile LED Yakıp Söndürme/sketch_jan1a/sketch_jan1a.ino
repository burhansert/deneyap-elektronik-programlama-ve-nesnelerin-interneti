void setup() {
  pinMode(D12, OUTPUT);
}
void loop() {
  digitalWrite(D12, HIGH);
  delay(1000);
  digitalWrite(D12, LOW);
  delay(1000);
}