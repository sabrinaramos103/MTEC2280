//Question 3.

void setup(){
 size(500,500);
}

void draw(){
 line(0, 0, mouseX, mouseY);  // upper left corner of window draws line
 line(0, 500, mouseX, mouseY); // bottom left corner of window draws line
 line(500, 0, mouseX, mouseY); // upper right corner ''
 line(500, 500, mouseX, mouseY); // bottom right corner ''
}