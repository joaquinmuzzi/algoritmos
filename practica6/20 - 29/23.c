/* Escribir una función recursiva en C para imprimir un array. */

#include <stdio.h>
#include <stdlib.h>

int imprimir(int n, int array[n], int i) {
  if (i == n) return 1;
  printf("%d", array[i]);
  return imprimir(n, array, i+1);
}

int main(int argc, char const *argv[]) {
  int n = 3;
  int array[3] = {1, 2, 3};
  imprimir(n, array, 0);
  return 0;
}
