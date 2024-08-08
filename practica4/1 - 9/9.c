/* Escribir un programa que acepte dos argumentos enteros 𝑠 y 𝑛, siendo 𝑠 el valor semilla para srand(). El programa declara e inicializa un array de enteros de longitud 10 con números aleatorios módulo 𝑛. Buscar el mínimo
y máximo del array. Imprimir la lista en una sola línea indicando con una flecha hacia arriba el máximo y una
hacia abajo el mínimo. */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  int array[10];
  int n = atoi(argv[1]);
  int s = atoi(argv[2]);
  srand(s);

  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < 10; i++) {
    int aleatorio = rand() % n;
    array[i] = aleatorio;
    min = aleatorio < min ? aleatorio : min;
    max = aleatorio > max ? aleatorio : max;
  }
  for (int i = 0; i < 10; i++) {
    if (array[i] == min) {
      printf("↓");    
    } else if (array[i] == max) {
      printf("↑");
    }
    printf("%d,", array[i]);
  }
  return 0;
}
