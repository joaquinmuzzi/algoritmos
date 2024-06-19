/* Escribir un programa que acepte un argumento entero 𝑛 e imprima las potencias positivas de dos hasta 2^𝑛, una
por línea. Dibujar el diagrama de flujo. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int i = 2; i <= n; i *= 2) {
    printf("%i\n", i);
  }
  return 0;
}
