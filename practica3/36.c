/* Escribir un programa en C que reciba dos argumentos enteros 𝑥 e 𝑦 y declare dos variables con los mismos
nombres. El programa tiene que asignar a 𝑥 el menor de los dos valores, independientemente del orden en el
que fueron ingresados. */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  x = x < y ? x : y;
  printf("el menor valor es %i\n", x);
  return 0;
}