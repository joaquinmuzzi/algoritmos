/* Escribir un programa que reciba un string como argumento y decida si la palabra es un palíndromo o no. */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int palindromo(char *palabra) {
  int final = 0;
  while (palabra[final] != 0) {
    final++;
  }
  int i = 0;
  while (palabra[i] != 0) {
    if ((palabra[i]) != (palabra[--final - i])) {
      return 0;
      break;
    }
    i++;
  }
  return 1;
}

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  printf("%i\n", palindromo(palabra));
  return 0;
}
