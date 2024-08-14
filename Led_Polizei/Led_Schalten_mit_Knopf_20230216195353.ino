// 3 led mit schalter

int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int knopfPin = 8;
int knopfStatus;

void setup()
{
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(knopfPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{

  knopfStatus = digitalRead(knopfPin);
  Serial.println(knopfStatus);

  if (knopfStatus == 0)
  {

    int i = 50;

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
  else
  {
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }
}
