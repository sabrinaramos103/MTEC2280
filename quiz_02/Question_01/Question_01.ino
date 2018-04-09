int ledPin[] = {5, 6, 7, 8};


void setup() {
  Serial.begin(9600);
  Serial.println("Serial Ready");
  randomSeed(analogRead(3));
  int rando = random(3);
  Serial.println("Number of LED's on is" + String( rando) + ".");

  for(int i = 0; i < 4; i++){
    pinMode(ledPin[i], OUTPUT);
  }

  for(int i = 0; i < 4; i++){
    digitalWrite(ledPin[i], LOW);
  }

  for(int i = 0; i < rando; i = i + 1){
    digitalWrite(ledPin[i], HIGH);
  }
}

void loop() {

}
