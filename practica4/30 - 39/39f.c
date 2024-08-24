/* Escribir un programa que calcule la traza de una matriz cuadrada. La traza es la suma de los elementos de la
diagonal principal. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int matriz[n][n];
  int suma = 0;
  double promedio;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      int n = (rand() % 9) + 1;
      matriz[i][j] = n;
      printf("%i ", matriz[i][j]);
      if (i == j) {
        suma += matriz[i][j];
      }
    }
    printf("\n");
  }
  promedio = (double)suma/n;
  printf("%d\nel promedio es %.2f", suma, promedio);
  return 0;
}
