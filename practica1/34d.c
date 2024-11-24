/* Un programa que tome dos números enteros 𝑥 e 𝑦 como argumentos e imprima la distancia entre el punto (𝑥, 𝑦 ) y el origen (0, 0). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  double distancia = sqrt(x*x + y*y);
  printf("%.2f", distancia);
  return 0;
}
