/*Escribir un programa que acepte un argumento entero 𝑛 e imprima 𝑛 números aleatorios entre 0 y 100. Al
finalizar el programa debe imprimir el promedio de los números que aparecieron. Dar el diagrama de flujo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]){
  srand(time(NULL));
  int n = atoi(argv[1]);
  double suma = 0;
  int i;
  double promedio;
  for (i = 0; i < n; i++) {
    int random = rand() % 100; 
    suma += random;
    printf("%i\n", random);
  }
  promedio = suma / i;
  printf("El promedio es: %.2f\n", promedio);
  return 0;
}
