/* Escribir un programa que acepte tres argumentos enteros e imprima “iguales” si los tres números son iguales o
“no iguales” de lo contrario. Dar el diagrama de flujo. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  if(a == b && b == c){
    printf("Iguales\n");
  }else {
    printf("No igualmente\n");
  }
  return 0;
}
