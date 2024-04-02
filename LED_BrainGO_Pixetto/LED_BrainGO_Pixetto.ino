#include <Pixetto.h>

Pixetto ss(13,12);

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  ss.begin();

  ss.setDetectMode(false);
    digitalWrite(7,HIGH);
  analogWrite(6,0);
  digitalWrite(4,LOW);
  analogWrite(5,0);
  ss.enableFunc(ss.FUNC_TRAFFIC_SIGN_DETECTION);
}


void loop()
{
    if (ss.isDetected()) {
      if ((ss.getTypeID()) == (ss.SIGN_NO_ENTRE)) {
        digitalWrite(7,HIGH);
        analogWrite(6,0);
        digitalWrite(7,HIGH);
        analogWrite(6,0);
        delay(100);
      } else if ((ss.getTypeID()) == (ss.SIGN_ONEWAY_TRAFFIC)) {
        digitalWrite(7,HIGH);
        analogWrite(6,50);
        digitalWrite(4,LOW);
        analogWrite(5,50);
        delay(100);
      } else if ((ss.getTypeID()) == (ss.SIGN_LEFT_TURN)) {
        digitalWrite(7,HIGH);
        analogWrite(6,50);
        digitalWrite(4,LOW);
        analogWrite(5,0);
        delay(100);
      } else if ((ss.getTypeID()) == (ss.SIGN_RIGHT_TURN)) {
        digitalWrite(7,HIGH);
        analogWrite(6,0);
        digitalWrite(4,LOW);
        analogWrite(5,50);
        delay(100);
      }
    } else {
      digitalWrite(7,HIGH);
      analogWrite(6,0);
      digitalWrite(4,LOW);
      analogWrite(5,0);
    }

}