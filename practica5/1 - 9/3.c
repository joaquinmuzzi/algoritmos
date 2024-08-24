/* Escribir un programa en C que lea un número 𝑛 entero por entrada estándar. Leer una línea con 𝑛 enteros a
continuación. Al terminar de leer los números, imprimir su suma. */

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int sum = 0;
  int num;
  for (int i = 0; i < n; i++) {
    scanf("%d", &num);
    sum += num;
  }
  printf("%d\n", sum);
  return 0;
}