/* Escribir un programa que acepte un argumento entero 𝑛 e imprima los números de 1 hasta 𝑛 y su cuadrado. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int i = 1; i <= n; i++) {
    printf("%i -> %i\n", i, i*i);
  }
  return 0;
}
