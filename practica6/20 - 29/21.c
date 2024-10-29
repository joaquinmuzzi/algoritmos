/* Usando el algoritmo de Euclides, escribir una función recursiva en C int mcd(int a, int b) que devuelva el
máximo común divisor de 𝑎 y 𝑏. */

#include <stdio.h>
#include <stdlib.h>

int mcd(int a, int b) {
  if (a % b == 0) return b;
  return mcd(b, a % b);
}

int main(int argc, char *argv[]) {
  printf("%d", mcd(atoi(argv[1]), atoi(argv[2])));
  return 0;
}