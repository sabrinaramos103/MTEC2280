size(500,500);
background(0);
stroke(255,255,255);

//start i at 0
//and until its more than 10,000
// draw a random line
// and increment i by 1

for(int i = 0; i < 50; i++){
  float x1 = random(width);
  float y1 = random(height);
  
  float x2 = random(width);
  float y2 = random(height);
  
  
  // any time you rotate, use pushMatrix
  //pushMatrix();
  // define a new origin point
  //translate(x1, y1);
  //rotate(random(TWO_PI));
  
  line(x1, y1, x2, y2);
  //line(x2, y2, x1, y1);
  //line(width/2, y1, x2, height/2);
  line(width/2, 0, x2, y2 * .5);
  line(width, height/2, x2, y2);
  line(width/2, height, x2, y2);
  line(0, height/2, x2, y2);
  //popMatrix();
  
}