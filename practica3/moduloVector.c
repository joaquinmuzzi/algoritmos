// Un programa que calcule el modulo de un vector

 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

int main(int argc, char *argv[]){
  int u1 = atoi(argv[1]);
  int u2 = atoi(argv[2]);
  int u3 = atoi(argv[3]);
  int discriminante = u1*u1 + u2*u2 + u3*u3; 
  double modulo = sqrt(discriminante);
  printf("El modulo es la raiz cuadrada de: %i\n", discriminante);
  printf("Osea: %.2f\n", modulo);
  return 0;
}
