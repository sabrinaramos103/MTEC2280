#include <Servo.h>

Servo servoX;  // create servo object to control an X axis servo
Servo servoY;  // and for Y
Servo servoZ;

// (a maximum of eight servo objects can be created!)

int servoXPin = 9;  // what pins are our servos connected to?
int servoYPin = 10;
int servoZPin = 11;

int posX = 0;    // variable to store the servo position
int posY = 0;
int posZ = 0; // variable to store the other servo position

void setup() {
  Serial.begin(9600);  // we're gonna use serial comm.

  // "attach" servos
  servoX.attach(servoXPin);
  servoY.attach(servoYPin);
  servoZ.attach(servoZPin);
}

void loop() {
  // see if there is available serial data
  if (Serial.available() > 0) {
    int inByte = Serial.read();

    if (inByte == 1) {
      servoX.write(90);
      servoY.write(50);
      servoZ.write(30);

      delay(500);

      servoX.write(180);
      servoY.write(26);
      servoZ.write(18);

    }
    if (inByte == 2) {
      servoX.write(180);
      servoY.write(180);
      servoZ.write(180);

    }
     if (inByte == 3) {
      servoX.write(180);
      servoY.write(180);
      servoZ.write(180);

    }

    // read the incoming bytes
    //posX = Serial.read();
    //posY = Serial.read();
    //posZ = Serial.read();
  }

  // "write" for a servo motor just tells it what angle to go to

}
