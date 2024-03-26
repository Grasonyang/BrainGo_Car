void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
    digitalWrite(11,HIGH);
  digitalWrite(4,LOW);
  analogWrite(5,0);
  digitalWrite(7,HIGH);
  analogWrite(6,0);

}


void loop()
{
    switch (Serial.read()) {
    	case 'w':
    	  digitalWrite(11,LOW);
      digitalWrite(4,LOW);
      analogWrite(5,255);
      digitalWrite(7,HIGH);
      analogWrite(6,255);
      delay(2000);
      digitalWrite(4,LOW);
      analogWrite(5,0);
      digitalWrite(7,HIGH);
      analogWrite(6,0);
    	  break;
    	case 'd':
    	  digitalWrite(11,LOW);
      digitalWrite(7,LOW);
      analogWrite(6,50);
      digitalWrite(4,LOW);
      analogWrite(5,50);
      delay(2000);
      digitalWrite(4,LOW);
      analogWrite(5,0);
      digitalWrite(7,HIGH);
      analogWrite(6,0);
    	  break;
    	case 's':
    	  digitalWrite(11,LOW);
      digitalWrite(7,LOW);
      analogWrite(6,255);
      digitalWrite(4,HIGH);
      analogWrite(5,255);
      delay(2000);
      digitalWrite(4,LOW);
      analogWrite(5,0);
      digitalWrite(7,HIGH);
      analogWrite(6,0);
    	  break;
    	case 'a':
    	  digitalWrite(11,LOW);
      digitalWrite(7,HIGH);
      analogWrite(6,50);
      digitalWrite(4,HIGH);
      analogWrite(5,50);
      delay(2000);
      digitalWrite(4,LOW);
      analogWrite(5,0);
      digitalWrite(7,HIGH);
      analogWrite(6,0);
    	  break;
       }

}