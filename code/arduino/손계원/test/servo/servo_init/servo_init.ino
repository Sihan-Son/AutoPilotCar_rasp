#include <Servo.h>

Servo myservo;

int pos = 0;

void setup() {
  myservo.attach(2);

}

void loop() {

  myservo.write(115);
  delay(1000);

  myservo.write(85);
  delay(1000);

  //myservo.write(120);
  //delay(1000);

  //myservo.write(89);
  //delay(1000);


}
