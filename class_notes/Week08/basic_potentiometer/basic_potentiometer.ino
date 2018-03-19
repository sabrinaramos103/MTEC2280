void setup() {
  //don't need to establish pinMode when using analog pins

  //console logging and always remember this
  Serial.begin(9600);
  pinMode(8, OUTPUT); // set up speaker to pin 

}

void loop() {
  //query the analog pin 0 for values that run from 0 to 1023 or
  // 0 to 5 volts
  int val = analogRead(0);

  // map takes 5 arguments
  // the value you want to map
  // input minimum
  // input maximum
  // output minimum
  // output maximum
  int mappedVal = map(val, 0, 1023, 5000, 16000); //change the number from 1, 10 with mappedVal *= 1000

  //mappedVal *= 1000

  //makes sound

  digitalWrite(8, HIGH);
  delayMicroseconds(val+1);
  digitalWrite(8, LOW);
  delayMicroseconds(val+1); 

  // print out useful diagnostic information
  // but remember to comment out when you play sketch
  // otherwise it messes up sound by adding additional delays
//  Serial.print(mappedVal);
//  Serial.print(", ");
//  Serial.println(val);

  //delay(20);

}
