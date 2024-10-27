/* Escribir una función recursiva en C para pasar un número en decimal a binario. */
// 1+2+8 = 11
// 1011

#include <stdio.h>
#include <stdlib.h>

void dec_to_bin(int n) {
  if (n == 0) return;
  dec_to_bin(n / 2);
  printf("%d", n % 2);
}

int main(int argc, char *argv[]) {
  dec_to_bin(atoi(argv[1]));
  return 0;
}
