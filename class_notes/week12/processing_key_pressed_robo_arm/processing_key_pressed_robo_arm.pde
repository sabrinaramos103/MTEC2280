import processing.serial.*;  // import serial library

Serial myPort;  // Create object from Serial class

void setup() {
  size(500, 300);

  // remember to set your serial port...
  printArray(Serial.list());
  myPort = new Serial(this, Serial.list()[3], 9600);
}

void draw() {

  background(0);
  fill(255);

  ellipse(mouseX, mouseY, 20, 20);

  // map the mouse position from 0 -> window width to a range of degrees for the servo
  // the servo can handle 180 degrees, but I think the pointer is better with a limited range
  int posX = int(map(mouseX, 0, width, 1, 255));
  
  }
void keyPressed(){
  if (key == 'a'){
    myPort.write(1);
  }
  
  if (key == 'd'){
    myPort.write(2);
  }
  
  if (key == 'w'){
    myPort.write(2);
  }
  
   if (key == 's'){
    myPort.write(1);
  }
  
  
}