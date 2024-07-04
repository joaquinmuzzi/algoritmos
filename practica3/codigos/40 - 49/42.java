size(400, 400); 
 background(0);
 int n = 150;
 int y = 0-height/n;
 ellipseMode(CORNER);
 if(n < 4 || n > 100 || 400 % n == 1){
  text("ubo un error", 14, 200);
 }
 else{
   for(int i = 0; i < n*n; i++){
     if(i % n == 0){
       y = y + height / n;
     }
     ellipse(i%n*(width/n), y, width/n, height/n);
   }
}
