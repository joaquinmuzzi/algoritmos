/* Escribir una función recursiva en C que reciba un entero 𝑛 en binario y devuelva su equivalente en código Gray. */
//  1010
// 1010
// ----
// 1111

#include <stdio.h>
#include <stdlib.h>

int to_gray(int n, int gray) {
  if ( n < 1 ) return gray;
  return to_gray(n/10, (gray*10) + (n%10 ^ (n/10)%10)); // no me pidas que te explique esta línea
}

int main(int argc, char *argv[]) {
  printf("%d", to_gray(atoi(argv[1]), 0));
  return 0;
}
