/* Escribir un programa en C que acepte un número arbitrario de argumentos enteros por línea de comandos e
imprima el máximo de los números ingresados. */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int max = atoi(argv[1]);
  for (int i = 1; i < argc ; i++) {
    int input = atoi(argv[i]);
    max = (max > input) ? max : input;
  }
  printf("%i\n", max);
  return 0;
}
