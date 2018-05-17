#include <Servo.h>
#include <Servo.h>
#include <Servo.h>

Servo servoX; //connects servoX
Servo servoY; //connects servoY
Servo servoZ; //connects servoZ

int pos = 0;

void setup() {
  servoX.attach(9);
  servoY.attach(10);
  servoZ.attach(11);
}

void loop() {
  for(pos = 0; pos <= 180; pos++){
    servoX.write(180); // X-Axis starts from 0 degrees
    servoY.write(100); // Y-Axis raises arm up to 100 degrees
    servoZ.write(0);
    delay(1500); // gives the arms a pause for a second
    
    servoX.write(60);
    servoY.write(110); // X-Axis rotates back to 90 degrees
    delay(525); // delays for almost half a second
    
    servoX.write(0);
    servoY.write(75);
    delay(1000);
    
  }

  for(pos = 180; pos >= 0; pos--){
    servoX.write(180);
    delay(1000);
    servoX.write(0);
    delay(1000);
  }

}
