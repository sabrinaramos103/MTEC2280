void setup(){
 size(500, 500);
 background(255);
  
}

void draw(){
  //float red = random(255);
  //float green = random(255);
  
  //fill(red, green, 213);
  
 //ellipse(250, 250, mouseX, mouseY);
}
void mouseDragged(){
  line(mouseX, mouseY, pmouseX, pmouseY);
}

void keyPressed(){
  println(key);
  if(key == 'a'){
  stroke(random(255), random(255), random(255));
  strokeWeight(10);
  }
 
 if(key == 'b'){
   background(0);
 }
 if(key == 'w'){
   background(255);
 }
 
}