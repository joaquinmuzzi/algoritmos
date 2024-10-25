/* Escribir una función recursiva en C para invertir los dígitos de un número entero. */

#include <stdio.h>
#include <stdlib.h>

int swap(int n, int suma) {
  if ( n < 1 ) return suma;
  return swap((n/10), (suma * 10) + (n % 10));
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int m = 0;

  printf("%d", swap(a, m));

  return 0;
}


