/* Escribir una función recursiva en Processing para dibujar el triángulo de Sierpinski. Usar un argumento 𝑛 para
controlar el orden de la recursión */
//

void setup() {
  size(600, 600);
  background(255);
  fill(0);

	int n = 3;
	
  float xMiddle = width / 2;
  float Ymiddle = (width * sin(radians(60))) / 2;

  drawTriangle(0, height, width, 1);
  recursiveTriangle(n, xMiddle, Ymiddle, width/2, height);
}

void recursiveTriangle(int n, float x, float y, float side, float floor) {
	if (n == 0) return;
  fill(255);
  drawTriangle(x/2, floor - y, side, -1);
	recursiveTriangle(n-1, x, y/2, side/2, floor);
	recursiveTriangle(n-1, x*3, y/2, side/2, floor);
}

void drawTriangle(float x, float y, float side, float direction){
  float x1 = x;
  float x2 = x + side / 2.0;
  float x3 = x + side;
  float y1 = y;
  float y2 = y - (direction * (side * sin(radians(60))));
  float y3 = y;
  triangle(x1, y1, x2, y2, x3, y3);
}

