/* Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el
promedio de los valores en el array */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int array[100];
  int suma = 0;
  for (int i = 0; i < 100; i++) {
    int aleatorio = rand() % 100; // Aleatorio entre 0 y m
    array[i] = aleatorio;
    suma += aleatorio;
  }
  double promedio = (double)suma / 100.0;
  printf("\nEl promedio es: %.2f", promedio);
  return 0;
}
