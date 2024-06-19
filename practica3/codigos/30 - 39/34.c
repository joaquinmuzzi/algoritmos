/* Escribir un programa que implemente el método de Newton para aproximar el valor de la raíz cuadrada de un
número real 𝑐. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double c = atof(argv[1]);
  double t = c;
  double e = 10 / pow(10, 15);
    while (fabs(t - c/t) > (e * t)) {
      t = ( c/t + t ) / 2;
    }
  printf("%.15f\n", t);
  return 0;
}
