void setup(){
  size(600, 600);
  noStroke();
  background(0);
  //frameRate function is how many times per second
  
}

void draw(){
  
  // to create a variable you have to give it a...
  // TYPE,  a NAME, and a VALUE
  float x = random(width);
  float y = random(height);
  
  println(x, y);
  
  // create a random color RGB and store it to
  // variables for later
  float red = random(255);
  float green = random(255);
  float blue = random(255);
  
  //random(255) for fill with give a random color?
  fill(red, green, blue);
  
  // drawing the ellipse using variable as its position
  ellipse(x, y, 20, 20);
  
  //rectMode(CENTER);
  //rect(x, y, 20, 20);
  // rect creates a rectangle, can be positioned like ellipse
  rect(x - 10, y + 10, 20, 20);
  
}