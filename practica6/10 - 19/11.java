/* Realizar el siguiente dibujo usando gráficas tortuga. */

  float x, y;
  float a = 90;
  float d = 10;

void setup(){
  size(700, 700);
  x = 0;
  y = height;
  background(255);

  for (int i = 0; i < 200; i++) {
    turtle('F');
    turtle('R');
    turtle('F');
    turtle('R');
    turtle('F');
    turtle('R');
    turtle('F');
    turtle('R');
    d += 10;
  }
}

void turtle(char command) {
  switch(command) {
    case 'F':
      float x2 = x + cos(radians(a)) * d;
      float y2 = y - sin(radians(a)) * d;
      line(x, y, x2, y2);
      x = x2; 
      y = y2;
      break;
    case 'R':
      turn(-90); 
      break;
    case 'L':
      turn(90);
      break; 
  }
}

void forward(float d) { 
  float nx = x + cos(radians(a)) * d; 
  float ny = y - sin(radians(a)) * d; 
  line(x, y, nx, ny);
  x = nx;   
  y = ny;
}

void turn(float na) {
  a += na; 
}