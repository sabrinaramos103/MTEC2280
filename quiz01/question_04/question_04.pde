//Question 4.

void setup(){
 size(500,500);
}
void draw(){
  
 //ellipse(50, 50, 50, 50); sizing for the ellipse
 
}

void keyPressed(){
 if(key == 'b'){
   background(random(255), random(255), random(255));
   //when 'b' is pressed background changes to random color
 }
 if(key == 'x'){
   float x = random(width); // gives width a random number
   float y = random(height); // gives height a random number
   fill(random(255), random(255), random(255)); //circle is filled with different colors
   ellipse(x, y, 50, 50); // x and y give the ellipse another position, size is the same
 }
  
}