/* Escribir una función void swap(int a, int b) en C que intercambie dos variables enteras. Hacer una función
similar pero para un array. La función void swap(int a[], int i, int j) toma un array y dos índices. ¿Qué
diferencias encuentran entre ambas funciones? */

#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int i, int j) {
  int temp_a = a[i];
  a[i] = a[j];
  a[j] = temp_a;
}

int main(int argc, char *argv[]) {
  int array[5] = {1, 2, 3, 4, 5};
  swap(array, 0, 4);
  for (int i = 0; i < 5; i++) printf("%d", array[i]);
  
  return 0;
}
