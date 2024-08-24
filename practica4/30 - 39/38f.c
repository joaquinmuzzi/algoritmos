/* Escribir un programa que declare dos matrices de 3 × 3: 𝐴 y 𝐵. Calcular y almacenar en una matriz 𝐶 la suma de
𝐴 y 𝐵. Al finalizar imprimir 𝐶. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sumar_matrices(int n, int matriz1[n][n], int matriz2[n][n], int matriz3[n][n]) {
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    }
  }
}

void imprimir_matriz(int n, int matriz[n][n]) {
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n\n\n");
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int A[3][3];
  int B[3][3];
  int C[3][3];
  for (size_t i = 0; i < 3; i++){
    for (size_t j = 0; j < 3; j++) {
      A[i][j] = rand() % 10;
      B[i][j] = rand() % 10;
    }
    
  }
  
  sumar_matrices(3, A, B, C);
  imprimir_matriz(3, A);
  imprimir_matriz(3, B);
  imprimir_matriz(3, C);
  return 0;
}
