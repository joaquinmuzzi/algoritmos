/* Escribir un programa que acepte como argumento un entero 𝑛. Generar una lista con los primeros 𝑛 números de
Fibonacci usando un array de dimensión. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int array[n];
  int g = 1;
  int f = 0;
  int temp = 0;
  for (int i = 0; i < n; i++) {
    array[i] = f;
    temp = g + f;
    g = f;
    f = temp;
    printf("%d\n", array[i]);
  }
  
  return 0;
}
