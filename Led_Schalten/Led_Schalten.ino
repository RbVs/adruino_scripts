// led an digital pin 7

int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{

  int i = 0;

  for (i = 0; i < 2000; i++)
  {
    digitalWrite(ledPin5, HIGH);
    delay(i);
    digitalWrite(ledPin5, LOW);
    delay(i);
    digitalWrite(ledPin6, HIGH);
    delay(i);
    digitalWrite(ledPin6, LOW);
    delay(i);
    digitalWrite(ledPin7, HIGH);
    delay(i);
    digitalWrite(ledPin7, LOW);
    delay(i);
    digitalWrite(ledPin6, HIGH);
    delay(i);
    digitalWrite(ledPin6, LOW);
    delay(i);
  }

  i = 0;
}
