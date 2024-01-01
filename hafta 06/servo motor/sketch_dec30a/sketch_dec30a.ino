#include <Deneyap_Servo.h>
Servo myservo;
int pos = 0;

void setup() {
  myservo.attach(D0);
}

void loop() {
  for (pos=0; pos<= 180; pos+= 1) {
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos-= 1)
  {
    myservo.write(pos);
    delay(10);
  }
}