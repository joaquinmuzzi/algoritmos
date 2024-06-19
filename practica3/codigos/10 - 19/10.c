/*Usando el algoritmo de Euclides para encontrar el MCD (máximo común divisor) escribir un programa que acepte
como argumentos dos números enteros 𝑎 y 𝑏 e imprima su MCD*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int t;
  while (b != 0){
    t = b;
    b = a % b;
    a = t;
  }
  printf("%i\n", a);

  return 0;
}
