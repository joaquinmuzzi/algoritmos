/* 7. Escribir en Processing una función void turtle(char command) para implementar lo que se conoce como turtle
graphics. El argumento de tipo char puede ser uno de tres comandos: 'F' por forward o adelante, 'R' y 'L' por
right y left respectivamente (girar 90 grados a la derecha o a la izquierda). Usar la función line() de Processing
para ir dibujando el camino de la tortuga.
También es conveniente tener una función void rotateTurtle(int angle) para girar a la tortuga con mayor
precisión que los comandos right y left.
Trabajar con variables globales para la posición, dirección y distancia de cada paso de la tortuga. */


float x, y;
float a; 
float d = 30;

void setup(){
  size(400, 400);
  background(255);
  x = width / 2;
  y = height / 2;
  a = 90;

  turtle('F');
  turtle('L');
  turtle('F');
  turtle('L');
  turtle('F');
  turtle('L');
  turtle('F');
  turtle('R');
  turtle('F');

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