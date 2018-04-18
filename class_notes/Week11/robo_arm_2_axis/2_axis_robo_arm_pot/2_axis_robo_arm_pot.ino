#include <Servo.h>
 
Servo servoX;  // create servo object to control an X axis servo
Servo servoY;  // and for Y
Servo servoZ;
 
// (a maximum of eight servo objects can be created!)
 
int servoXPin = 9;  // what pins are our servos connected to?
int servoYPin = 10;
int servoZPin = 11;

int sensorPin1 = A0; // pins for pot
int sensorPin2 = A1;
int sensorPin3 = A2;

//int sensorValue = 0;
 
void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.

  // "attach" servos 
  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);
  
}
 
void loop() {
  // see if there is available serial data

  

  int val = analogRead(sensorPin1);
  int val2 = analogRead(sensorPin2);
  int val3 = analogRead(sensorPin3);
  
  int mappedVal = map(val, 0, 1023, 0, 180);
  int mappedVal2 = map(val2, 0, 1023, 0, 180);
  int mappedVal3 = map(val3, 0 , 1023, 0, 180);

 Serial.println(mappedVal);
  // "write" for a servo motor just tells it what angle to go to
  servoX.write(mappedVal);
  servoY.write(mappedVal2);
  servoZ.write(mappedVal3);
}
