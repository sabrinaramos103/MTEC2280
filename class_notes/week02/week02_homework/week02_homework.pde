void setup(){
 size(500, 500);
 background(0);
  
}

void draw(){
  
  float red = random(255);
  float green = random(255);
  
  fill(red, green, 213);
  
 ellipse(250, 250, mouseX, mouseY);
 
}