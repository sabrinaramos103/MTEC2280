// produce sound

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);

}

void loop() {
  //note one
  //use a for loop to alternate between notes
  for(int i = 0; i < 100; i++){
  digitalWrite(4, HIGH);
  delayMicroseconds(23500);
  
  digitalWrite(4, LOW);
  delayMicroseconds(23500);

  }

  // note two
  // for loop does the same thing, '100' creates a delay initially
  for(int i = 0; i < 100; i++){

  digitalWrite(4, HIGH);
  delayMicroseconds(35100);

  digitalWrite(4, LOW);
  delayMicroseconds(35100);
  }

}
