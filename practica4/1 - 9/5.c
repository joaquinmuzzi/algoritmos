/* Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Encontrar el
máximo y el mínimo del array */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int array[100];
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < 100; i++) {
    int aleatorio = rand() % 100; // Aleatorio entre 0 y m
    array[i] = aleatorio;
    printf("%i,", aleatorio);
    max = aleatorio > max ? aleatorio : max;
    min = aleatorio < min ? aleatorio : min;
  }
  printf("\nEl mas grande es %d y el mas chico es %d", max, min);
  return 0;
}
