/* Escribir una función que reciba un argumento de tipo string y busque en un array conocido en tiempo de compilación si el string está en el array. Devolver el índice del elemento en el array si fue encontrado. De lo contrario
devolver -1. */

#include <stdio.h>
#include <string.h>
#define N 12

int index_of(int a, char *array1[], char *word) {
  for (int i = 0; i < a; i++) {
    if (strcmp(array1[i], word) == 0) return i+1;
  }
  return -1;
}

int main(int argc, char *argv[]) {
  char *array[N] = {"pipe", "milo", "kevin", "felipe", "mateo", "juani", "juan", "porta", "luana", "sofia", "valeria", "cain"};
  printf("%i\n", index_of(N, array, argv[1]));
  return 0;
}
