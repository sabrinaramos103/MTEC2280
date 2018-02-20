/* ~CHALLENGE~
- add a second ball
- random background change every collision
- different shapes
- random fill for ball every collision
- random size for ball every collision
*/
// store pong ball coordinates
// as GLOBAL VARIABLES!!
float x;
float y;
float xSpeed = 4;
float ySpeed = 4;

 float red = random(255);
  float green = random(255);
  float blue = random(255);

void setup() {
  size(500,500);
  
  // give the global variable values
  // now that the window has been created
  x = width/2;
  y = height/2;
  xSpeed = random(2,5);
  ySpeed = random(2,5);
}

void draw() {
 
  // removes the previous iteration
  background(0);
  // change the x position
  x = x + xSpeed;
  y = y + ySpeed;
  
  // did we hit the right side?
  if(x >= width) {
    //houston we made contact!!
    xSpeed = xSpeed * -1;
  }
  if(x <= 0){
    //to the left to theleft...
    xSpeed = xSpeed * -1;
  }
  
  // did we hit the top side?
  if(y >= height) {
    //houston we made contact!!
    ySpeed = ySpeed * -1;
  }
  if(y <= 0){
    //to the left to theleft...
    ySpeed = ySpeed * -1;
  }
  fill(red(255),green(255),blue(255));
  ellipse(x,y,20,20);
}