/*  Escribir un programa que calcule la traza de una matriz cuadrada. La traza es la suma de los elementos de la
diagonal principal. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int A[n][n];  
  int traza = 0;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      A[i][j] = (rand() % 10) + 1;
      traza += (i == j) ? A[i][j] : 0;
      printf("%i\t", A[i][j]);
    }
    printf("\n\n\n");
  }
  printf("La traza de la matriz es %i", traza);
  return 0;
}
