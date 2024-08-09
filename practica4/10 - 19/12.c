/* Escribir un programa que genere un array de 100 elementos con valores aleatorios enteros del 0 al 9. Contar la
cantidad de veces que aparece cada dígito en el array e imprimir una tabla con las frecuencias. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int array[N];
  int frecuencia[N];
  for (int i = 0; i < N; i++) {
    frecuencia[i] = 0;
  }
  for (int i = 0; i < N; i++) {
    int aleatorio = rand() % 10; 
    array[i] = aleatorio;
    frecuencia[aleatorio]++;
    printf("%i\n", array[i]);
  }
  printf("\n");
  for (int i = 0; i < 10; i++){
    printf("El %d aparece %d veces\n", i, frecuencia[i]);
  } 
  return 0;
}