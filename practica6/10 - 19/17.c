/* Escribir una versión recursiva en C de la función int fibonacci(int n) que devuelva el enésimo número de
Fibonacci. */

#include <stdio.h>
#include <stdlib.h>

int fibbonacci(int n) {
  if          (n == 0) return 0; 
  else if     (n == 1) return 1; 
  else return (fibbonacci(n-1) + fibbonacci(n-2)); 
}

int main(int argc, char *argv[]) {
  printf("%d", fibbonacci(atoi(argv[1])));
  return 0;
}
