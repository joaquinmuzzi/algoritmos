/* Escribir una función recursiva en C int count_divisors(int n, int divisor) que cuente la cantidad de divisores de un número entero positivo n. */

#include <stdio.h>
#include <stdlib.h>

int count_divisors(int n, int divisor, int i) {
  if (divisor == 0) return i;
  if (n % divisor == 0) i++;
  return count_divisors(n, divisor - 1, i);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  printf("%d", count_divisors(n, n, 0));
  return 0;
}
