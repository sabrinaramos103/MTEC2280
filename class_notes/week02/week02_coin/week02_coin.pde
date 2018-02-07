void setup(){
  size(600,600); 
  
  //FOR THE OCD IN ME, centers text.
  textAlign(CENTER, CENTER);
  textSize(25);
 
}

void draw(){
}

void keyPressed(){
    
  background(0);
  
  //create a variable of type INTEGER (int)
  // name it coin, and assign it a random value
  // that is either 0 or 1
  // because random returns a FLOAT we have to
  // convert it into an integer
  int coin = int(random(2));
 
 // if coin is 0 it prints head, if coin is 1 it prints tails
  if(coin == 0){
    
    text("heads", width/2, height/2);
    //println("heads");
  }
  if(coin == 1){
    text("tails", width/2, height/2);
    //println("tails");
  }
}