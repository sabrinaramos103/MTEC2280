int sensorPin = A0; //pot stays on this setting
int sensorValue = 0; //this registers the value for the LED's to turn on by


void setup() {
  Serial.begin(9600); //has the serial begin
  pinMode(5, OUTPUT); //these outputs are registered for the LEDs
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin); //has the system read the sensorpin when turned
  Serial.println(sensorValue); //prints the values depending on when turns

  if (sensorValue >= 1000){ //creates an if statement to separate each turning value
    //state 3 - ALL OUTPUTS
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    
  }

  else if (sensorValue < 1000 && sensorValue >= 850){
    //state 2
    // each state of being turn will turn on the lights from first to last
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    }

  
  else if (sensorValue < 850 && sensorValue >= 650){
    //state 2
    //separated by different value points to correctly turn on the lights
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    }

    else if (sensorValue < 650 && sensorValue >= 450){
    //state 1
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    }
    else if (sensorValue < 450 && sensorValue >= 250){
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    } 
  else{
    //state 1
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
   
    }
    
  delay(50);

}
