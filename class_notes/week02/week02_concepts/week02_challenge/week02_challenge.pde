//program where circle moves away from mouse
void setup(){
 size(500,500); 
  
}

void draw(){
  println(abs(mouseX - width/2));
  
  background(0);
 ellipse(width/2, height/2, (abs(mouseX - width/2)), mouseY); 
 
 // can change ellipse to (mouseX, mouseY, ???, ???) to make the circle follow the mouse.
  
}
