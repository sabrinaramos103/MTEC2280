int speakerPin = 8;

void setup() {
  pinMode(speakerPin, OUTPUT);
  
  

}

void loop() {

     //lit beat
  for(int i = 500; i > 400; i-=20){
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i*2);
  }
  for(int i = 500; i > 400; i-=20){
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i*2);
  }
  for(int i = 500; i > 400; i-=20){
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(i);
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(i*2);
    }
}
 
