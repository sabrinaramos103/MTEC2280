//challenge, to add an extra shape and change color...

float xPos;
float yPos;
float d = 100;

float xSpeed = 4;
float ySpeed = -4;

void setup(){
 size(600, 600);
 //changed the size of the window, to even out the width/height divided by 2.
 background(0);
 
 xPos = width/2;
 yPos = height/2;
  
}


void draw(){
  background(0);
  
  xPos = xPos + xSpeed;
  yPos = yPos + ySpeed;
  
  if(xPos >= width){
    xSpeed = xSpeed * -1;
    fill(random(255),random(255), random(255));
  }
  
  if(xPos <= 0){
    xSpeed = xSpeed * -1.01;
    fill(random(255),random(255),random(255));
  }
  //speed * -1.01 increases the speed of the shapes gradually..
  
  if(yPos >= height){
    ySpeed = ySpeed * -1.01;
    fill(random(255),random(255),random(255));
  }
  
  if(yPos <= 0){
    ySpeed = ySpeed * -1.01;
    fill(random(255),random(255),random(255));
  }
  
  ellipse(xPos,yPos, d, d);
  rect(yPos, xPos, d, d);
  //added rect (a square) into the program
  
  
}