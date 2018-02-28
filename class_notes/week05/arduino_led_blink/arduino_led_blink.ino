// variable to make blinking slow down over time
int blinkDelay = 0;


void setup() {  
  // sets up a digital pin to be used as an output, to blink an LED
  pinMode(8, OUTPUT);
  
}

void loop() {
  // increase the delay
  blinkDelay += 10;
  
  // turns LED on
  digitalWrite(8, HIGH);
  // delays the time by milliseconds
  delay(blinkDelay);
  // turns LED off
  digitalWrite(8, LOW);
  // delays for 1 second
  delay(blinkDelay);

  
}
