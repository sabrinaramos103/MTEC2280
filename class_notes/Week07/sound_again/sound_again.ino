int speakerPin = 8;
void setup() {
  pinMode(speakerPin, OUTPUT);

}

void loop() {
  for(int i = 10000; i > 1500; i-= 5){
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);

    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i - 40);
  }

  for(int i = 1000; i > 800; i-= 5){
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i);

    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i + 40);
  }
    

}
