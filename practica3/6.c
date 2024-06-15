/* Escribir un programa que acepte un argumento entero 𝑛, la cantidad de veces que el programa imprime “Hola
mundo”. Dar el diagrama de flujo. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[0]){
  int num = atoi(argv[1]);

  for(int i = 0; i < num; i++){
    printf("Hello World");
  }
  return 0;
}
