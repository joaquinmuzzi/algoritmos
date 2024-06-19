// Un programa acepta como argumento un número entero y decide si es positivo, negativo o cero.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int numero = atoi(argv[1]);
  printf("%s\n", numero > 0 ? "Es positivo" : ( numero < 0 ? "Es negativo" : "Es cero"));
  return 0;
}
