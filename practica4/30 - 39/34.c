/* Escribir un programa que declare una matriz (array bidimensional) de 3 × 3 de números enteros. Los elementos
de la matriz se conocen en tiempo de compilación. Imprimir la matriz, una fila por línea separando con espacios
los elementos. */

#include <stdio.h>

int main(int argc, char *argv[]){
  int array[3][3];
  int n = 1;
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      array[i][j] = n;
      n++;
      printf("%i ", array[i][j]);
    }
    printf("\n");
  }
  return 0;
}
