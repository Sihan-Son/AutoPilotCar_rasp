#include <SoftwareSerial.h>

int TxPin = 2;
int RxPin = 3;
int ledPin = 13;
SoftwareSerial BTSerial(TxPin, RxPin);

void setup()
{
  BTSerial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  if (BTSerial.available())
  {
    char cmd = (char)BTSerial.read();

    if (cmd == '1') {
      digitalWrite(ledPin, HIGH);
    } else if (cmd == '0') {
      digitalWrite(ledPin, LOW);
    }
  }
}

