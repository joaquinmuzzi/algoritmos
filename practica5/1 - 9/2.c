/* Escribir un programa en C que acepte 𝑛 enteros por entrada estándar hasta encontrar un cero. Al terminar de
leer los números imprimir su suma. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num, sum = 0;
  while (scanf("%d", &num) && num != 0) {
    sum += num;
    printf("Suma: %d\n", sum);
  }
  return 0;
}
