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
  size(1000, 1000);
  int n = 10;
  float x = 0.0;
  float y = (float)height;
  float side = 1000.0;
  float direction = -1.0;
  drawTriangle(x, y, side, -direction);
  for(int i = 1; i <= n; i++){
    y -= (side * sin(60));
    x += side / 2.0;
    side /= 2.0;
    drawTriangle(x, y, side, direction);
  }
}