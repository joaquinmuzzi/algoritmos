/* Escribir un programa que genere una matriz aleatoria 𝐴 de 𝑚×𝑛. Imprimir la matriz 𝐴 y 𝐴(𝑡)
(la matriz transpuesta de 𝐴). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir_matriz(int m, int n, int matriz[m][n]) {
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int m = atoi(argv[1]);
  int n = atoi(argv[2]);
  int A[m][n];
  int B[n][m];
  for (size_t i = 0; i < m; i++) {
    for (size_t j = 0; j < n; j++) {
      int random = (rand() % 9) + 1;
      A[i][j] = random;
      B[j][i] = A[i][j];
    }
  }
  imprimir_matriz(m, n, A);
  printf("\n");
  imprimir_matriz(n, m, B);
  return 0;
}
