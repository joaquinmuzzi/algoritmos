void drawTriangle(float x, float y, float side, float direction){
  float x1 = x;
  float x2 = x + side / 2.0;
  float x3 = x + side;
  float y1 = y;
  float y2 = y - (direction * (side * sin(radians(60))));
  float y3 = y;
  triangle(x1, y1, x2, y2, x3, y3);
}
void setup() {
  size(500, 500);
  int n = 10;
  float x = 0.0;
  float y = height;
  float side = 500.0;
  float direction = -1.0;
  drawTriangle(x, y, side, -direction);
  fill(0);
  for(int i = 1; i <= n; i++){
    side /= 2.0;
    x += side / 2.0;
    y -= (sqrt(3) * side) / 2;
    print("y vale ", y, ", x vale ", x, ", side vale ", side, "\n");
    drawTriangle(x, y, side, direction);
    fill(0);
  }
}

//LENGUA AMANDA
