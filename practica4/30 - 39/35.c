/* Escribir un programa que acepte un argumento 𝑛 y genere la matriz identidad de dimensión 𝑛 × 𝑛. Usar arrays
bidimensionales. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int array[n][n];
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      array[i][j] = (i == j) ? 1 : 0;
      printf("%i ", array[i][j]);
    }
    printf("\n");
  }
  return 0;
}


