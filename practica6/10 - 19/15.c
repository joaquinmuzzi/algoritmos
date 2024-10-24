/* Escribir una función recursiva que devuelva la suma de todos los dígitos de un número n */

#include <stdio.h>
#include <stdlib.h>

int suma_n(int n) {
  if (n % 10 == 1) return 1;
  return suma_n(n / 10) + (n % 10);
}

int main(int argc, char *argv[]) {
  printf("%d", suma_n(atoi(argv[1])));
  return 0;
}
