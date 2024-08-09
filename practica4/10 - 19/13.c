/* Escribir un programa que reciba un string como argumento y cuente la cantidad de carácteres en la palabra. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;
  while (argv[1][i] != 0) i++;
  printf ("%i\n", i);
  return 0;
}