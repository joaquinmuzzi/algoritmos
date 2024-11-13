/* Escribir una función recursiva en C que devuelva la suma de todos los elementos en un array */

#include <stdio.h>
#include <stdlib.h>

int suma(int n, int array[n]) {
  if(n == 0) return 0;
  return array[n - 1] + suma(n - 1, array);
}

int main(int argc, char const *argv[]) {
  int n = 3;
  int array[3] = {1, 2, 3};
  int sum = 0;
  printf("\n%d\n", suma(n, array));
  return 0;
}

// [1, 2, 3]