size(500,500);
noFill();

// += is shorthand for i = i + 10
for(int i = 0; i < width * 3; i += 20){
  //top
  ellipse(width/2, 0, i, i);
  //right
  ellipse(width, height/2, i, i);
  //bottom
  ellipse(width/2, height, i, i);
  //left
  ellipse(0, height/2, i, i);size(500,500);
}