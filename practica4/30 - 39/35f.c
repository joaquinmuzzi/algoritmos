/* Escribir un programa que acepte un argumento 𝑛 y genere la matriz identidad de dimensión 𝑛 × 𝑛. Usar arrays
bidimensionales. */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);

  int matriz[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        matriz[i][j] = 1;
      } 
      else {
        matriz[i][j] = 0;
      }
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n\n");
  }
  return 0;
}
