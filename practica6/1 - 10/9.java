/* Realizar el siguiente dibujo usando gráficas tortuga. */



float x1 = width / 2;
float y1 = height / 2;
float d = 40;
float a = 90;

void setup() {
  size(400, 400);
  background(255);
  for(int i = 0; i < 4; i++) {
    turtle('F');
    turtle('R');
    turtle('F');
    turtle('R');
    turtle('F');
    turtle('R');
    turtle('F');
    turtle('R');
    a += 15;
  }
}

void turtle(char command) {
   switch(command){
    case 'F':
      float x2 = x1 + sin(radians(a)) * d;
      float y2 = y1 - cos(radians(a)) * d;
      line(x1, y1, x2, y2);
      x1 = x2;
      y1 = y2;
      break;
    case 'R':
      turn(-90);
      break;
   }
}

void turn(int na) {
  a += na;
}