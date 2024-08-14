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
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin8 = 8;
int ledPin10 = 10;
int knopfPin = 13;
int knopfStatus;

void setup()
{
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(knopfPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{

  knopfStatus = digitalRead(knopfPin);
  Serial.println(knopfStatus);

  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin8, HIGH);
  digitalWrite(ledPin10, HIGH);

  delay(2500);

  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin8, LOW);
  digitalWrite(ledPin10, LOW);

 delay(2500);

  // if (knopfStatus == 0)
  // {

  //   int i = 30;

  //   for (int ledPin = 2; ledPin <= 7; ledPin++)
  //   {
  //     digitalWrite(ledPin, HIGH);
  //     delay(i);
  //     digitalWrite(ledPin, LOW);
  //     delay(i);
  //   }
  // }
  // else
  // {
  //   digitalWrite(ledPin2, LOW);
  //   digitalWrite(ledPin3, LOW);
  //   digitalWrite(ledPin4, LOW);
  //   digitalWrite(ledPin5, LOW);
  //   digitalWrite(ledPin6, LOW);
  //   digitalWrite(ledPin7, LOW);
  // }
}
