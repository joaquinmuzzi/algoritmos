/* Escribir un programa que declare un array de enteros de 3 × 3 y guarde en cada elemento los primeros 9 argumentos recibidos por línea de comandos. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int array[3][3];
  int k = 0;
  for (size_t i = 0; i < 3; i++) {
    for (size_t j = 0; j < 3; j++) {
      array[i][j] = atoi(argv[k]);
      printf("%i ", array[i][j]);
      k++;
    }
    printf("\n");
  }
  return 0;
}
