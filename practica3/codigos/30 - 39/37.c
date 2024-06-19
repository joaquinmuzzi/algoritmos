/* Escribir un programa que simule tirar una moneda. Imprimir “Cara” o “Ceca”. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]){
  srand(time(NULL));
  printf("%s\n", rand() % 2 ? "cara" : "ceca");
  return 0;
}