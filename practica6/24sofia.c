/* Escribir una función recursiva en C que devuelva la suma de todos los elementos en un array dividiendo al array en arrays mas chiquititos */

#include <stdio.h>
#include <stdlib.h>

int suma(int n, int array[n], int ini, int fin) {
  if(ini == fin) return array[ini];
  int medio = ( ini + fin ) / 2;
  return suma(n, array, ini, medio) + suma(n, array, medio + 1, fin);
}

int main(int argc, char const *argv[]) {
  int n = 8;
  int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  printf("\n%d\n", suma(n, array, 0, n - 1));
  return 0;
}

// [1, 2, 3, 4, 5, 6, 7, 8]