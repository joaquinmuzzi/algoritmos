/* Escribir una versión recursiva en C de la función int factorial(int n). */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
  if( n == 1 ) return 1;
  return factorial( n-1 ) * n;
}

int main(int argc, char *argv[]) {
  printf("%d", factorial(atoi(argv[1])));
  return 0;
}