void setup(){
 size(400, 400); 
 background(0);
 int n = 34;
 int y = 0-height/n;
 ellipseMode(CORNER);
 for(int i = 0; i < n*n; i++){
   if(i % n == 0){
     y = y + height / n;
   }
   ellipse(i%n*(width/n), y, width/n, height/n);
 }
}

void draw(){ 
}