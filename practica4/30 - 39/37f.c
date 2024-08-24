/* Escribir un programa que declare un array de enteros de 3 × 3 y guarde en cada elemento los primeros 9 argumentos recibidos por línea de comandos. */

#include <stdio.h>
#include <stdlib.h>
#define N 6
int main(int argc, char *argv[]) {
  int matriz[N][N];
  int w = 1;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      matriz[i][j] = atoi(argv[w]);
      w++;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
