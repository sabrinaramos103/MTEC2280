int led1Pin = 5;
int blinked = 1;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Ready");

  pinMode(led1Pin, OUTPUT);


}

void loop() {
  digitalWrite(led1Pin, HIGH);
  Serial.println("The LED has blinked " + String(blinked) + " times" + ".");
  blinked++;

  delay(500);

  digitalWrite(led1Pin, LOW);

  delay(500);

}
