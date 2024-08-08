/* Escribir un programa que acepte dos argumentos 𝑛 y 𝑚. El número 𝑛 es el tamaño de un array de enteros. El
programa llena el array con números aleatorios entre 0 y 𝑚 y los imprime uno por línea.. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]); // Tamaño del array
  int m = atoi(argv[2]);
  int array[n];
  for (int i = 0; i < n; i++) {
    int aleatorio = rand() % m; // Aleatorio entre 0 y m
    array[i] = aleatorio;
    printf("%d\n", array[i]);
  }
  return 0;
}
