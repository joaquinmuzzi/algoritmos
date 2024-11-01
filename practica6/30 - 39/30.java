/* Escribir una función recursiva en Processing para dibujar el triángulo de Sierpinski. Usar un argumento 𝑛 para
controlar el orden de la recursión */
//

void setup() {
  size(600, 600);
	background(255);
	fill(0);
  drawTriangle(0, height, width, 1);
	float xCenter = (0 + width/2 + width) / 3;
	float yCenter = (height + height + (height - (width * sin(radians(60))))) / 3;
	recursiveTriangle(xCenter, yCenter, width/2);
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

void recursiveTriangle(float x, float y, float side) {

	fill(255);
	drawTriangle(x/2, y/2, side, 0);
}