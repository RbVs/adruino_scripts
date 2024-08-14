int trigger = 8;
int echo = 7;
int distanz;
float zeit;

void setup() {

pinMode(trigger, OUTPUT);
pinMode(echo, INPUT);

Serial.begin(9600);


}

void loop() {
  digitalWrite(trigger, LOW);
  delay(10);
  digitalWrite(trigger, HIGH);
  delay(20);
  digitalWrite(trigger, LOW);

  zeit=pulseIn(echo, HIGH)/2;

  distanz = 0.0343*zeit;

  Serial.println(distanz);
  

}
