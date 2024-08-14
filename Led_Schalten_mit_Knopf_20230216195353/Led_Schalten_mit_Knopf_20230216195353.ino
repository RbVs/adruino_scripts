// // led an digital pin 7

// int ledPin = 7;
// int knopfPin = 8;
// int knopfStatus;

// void setup()
// {
//   pinMode(ledPin, OUTPUT);
//   pinMode(knopfPin, INPUT_PULLUP);
//   Serial.begin(9600);
// }

// void loop()
// {

//   knopfStatus = digitalRead(knopfPin);
//   Serial.println(knopfStatus);

//   if(knopfStatus == 0){
//       digitalWrite(ledPin, HIGH);
//   }else{
//     digitalWrite(ledPin, LOW);
//   }

// }

// 3 led mit schalter
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int knopfPin = 8;
int knopfStatus;

void setup()
{
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
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

    int i = 30;

    for (int ledPin = 2; ledPin <= 7; ledPin++)
    {
      digitalWrite(ledPin, HIGH);
      delay(i);
      digitalWrite(ledPin, LOW);
      delay(i);
    }
  }
  else
  {
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin7, LOW);
  }
}
