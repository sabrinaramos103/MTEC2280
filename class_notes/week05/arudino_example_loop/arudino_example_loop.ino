// variable to make blinking slow down over time



void setup() {  
  // sets up a digital pin to be used as an output, to blink an LED
  pinMode(8, OUTPUT);
  
}

void loop() {
  for(int i = 0; i < 1000; i+=10){
    // turns LED on
  digitalWrite(8, HIGH);
  // delays the time by milliseconds
  delay(i);
  // turns LED off
  digitalWrite(8, LOW);
  // delays for 1 second
  delay(i);
  
  
  

  }
}
