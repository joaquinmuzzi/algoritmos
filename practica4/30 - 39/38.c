/* Escribir un programa que declare dos matrices de 3 × 3: 𝐴 y 𝐵. Calcular y almacenar en una matriz 𝐶 la suma de
𝐴 y 𝐵. Al finalizar imprimir 𝐶. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(int n[3][3]){
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      printf("%i\t", n[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main(void) {
  srand(time(NULL));
  int A[3][3];  
  int B[3][3];
  int C[3][3];
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      A[i][j] = (rand() % 10) + 1;
      B[i][j] = (rand() % 10) + 1;
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  imprimir(A);
  imprimir(B);
  imprimir(C);
  return 0;
}
