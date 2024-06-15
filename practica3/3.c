/* Escribir un programa en C que use la función atan2() de math.h para calcular el ángulo que forma un vector de
coordenadas (𝑥, 𝑦 ) con el eje 𝑥. Por ejemplo el vector (1, 1) forma un ángulo de 45º y el vector (0, −1) un ángulo
de 270º. La función atan2(y, x) calcula la arcotangente de y dividido x. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14156926454

int main(int argc, char *argv[]){
  double x = atof(argv[1]);  
  double y = atof(argv[2]);
  double angulo = atan2(y, x) * 180.0/PI;
  printf("El angulo que forma es de: %.2f grados\n", angulo);  
  return 0;
}
