void setup() {
  size(500, 500);
  
  background(230,144,231);
  
  strokeWeight(4); //wider stroke thickness
}


// draw function draws something in a loop/repeatedly
//background(0,0,0); order matters, put the background first, covers original drawings
void draw() {
  
  //where is my mouse
  //allows the coder to see the cordinates of the mouse
  //println(mouseX, mouseY);
  
  // circle drawing mode
  //ellipse(mouseX, mouseY, 20, 20);
  // mouseX & Y change the circle to create more by following the cursor
  
} 
// if the mouse is clicked and dragged it displays whatever is within the function.
void mouseDragged(){
  //line drawing mode
  line(mouseX, mouseY, pmouseX, pmouseY); //pmouseX & Y is previous mouse position
  
}
// when a key is pressed...
void keyPressed(){
  println(key);
  
  // a single character must be expressed with single quotation marks.
  if(key == 'a'){
    //set the strokeWeight to 10
  stroke(244, 231, 245);
  strokeWeight(10);
  }
  
  if(key == 's'){
    //set the strokeWeight to 1
  stroke(123, 141, 120); //stroke(rgb) sets the color of the line
  strokeWeight(1);
  }
  
}
  