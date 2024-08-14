#define PIN_LED_RIGHT 11                // Pin für den Anschluss der rechten LED.
#define PIN_LED_LEFT 12                 // Pin für den Anschluss der linken LED.

#define DURATION 40                     // Wartezeit zwischen den Aufblitzern der LED.
#define CYCLES 5                        // Anzahl der Aufblitzer der LED pro Durchlauf.


void setup()
{
  pinMode(PIN_LED_RIGHT, OUTPUT);       // Pin der rechten LED als digitalen Ausgang festlegen. 
  pinMode(PIN_LED_LEFT, OUTPUT);        // Pin der linken LED als digitalen Ausgang festlegen.
}

void loop()
{
  for (byte n = 0; n < CYCLES; n++)     // Wiederhole CYCLES-mal.
  {
    digitalWrite(PIN_LED_RIGHT, HIGH);  // Rechte LED einschalten.
    delay(DURATION);                    // Warten.
    digitalWrite(PIN_LED_RIGHT, LOW);   // Rechte LED ausschalten.
    delay(DURATION);                    // Warten.
  }

  for (byte n = 0; n < CYCLES; n++)     // Wiederhole CYCLES-mal.
  {
    digitalWrite(PIN_LED_LEFT, HIGH);   // Linke LED einschalten.
    delay(DURATION);                    // Warten.
    digitalWrite(PIN_LED_LEFT, LOW);    // Linke LED ausschalten.
    delay(DURATION);                    // Warten.
  }  
}