size(400, 400);
int h = 0;
for(int i = 0; i <= width; i += 50){
  for(int j = 0; j <= height; j += 20){
    fill(0);
    stroke(255);
    rect(i-(25*(h%2)), j, 50, 20);
  }
  h++;
}