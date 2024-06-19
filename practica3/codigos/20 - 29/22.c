/* Escribir un programa que imprima los números en el intervalo del 1 al 100 que al ser divididos por un argumento
entero 𝑛, su resto sea igual a 3. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int i = 1; i <= 100; i++) {
    if(i % n == 3){
      printf("%i\n", i);
    }
  }
  return 0;
}
