size(500,500);
// make color run from 0 -> 500;
colorMode(RGB, 500);

//line(30, 0, 30, height);

//loop to the edge
for(int i = 0; i < width; i++){
  //changes color
  stroke(0, i, 0);
  //draw line
  line(i, 0, i, height);
  
  //print coorinadte
  println(i);
  
}