/* Escribir un programa que use el mazo de cartas del ejercicio anterior para repartir tres cartas. Mezclar el mazo
antes de repartir. Imprimir una cantidad 𝑛 de manos donde 𝑛 es un argumento del programa. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void mezclar_mazo(char mazo[][30], int size) {
    for (int i = 0; i < 100; i++) {
        int a = rand() % size;
        int b = rand() % size;
        char temp[30];
        strcpy(temp, mazo[a]);
        strcpy(mazo[a], mazo[b]);
        strcpy(mazo[b], temp);
    }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  char mazo[40][30];
  char *palos[] = {"Espada", "Basto", "Copa", "Oro"};
  char *numeros[] = {"Ancho", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Sota",
                     "Caballo", "Rey"};

  for (int i = 0; i < 40; i++) {
    char carta[30] = "";
    strcat(carta, numeros[i % 10]);
    strcat(carta, " de ");
    strcat(carta, palos[i / 10]);
    strcpy(mazo[i], carta);
  }
  
  for (int i = 0; i < n; i++) {
    mezclar_mazo(mazo, 30);
    for (int i = 0; i < 3; i++) {
      printf("%s\n", mazo[i]);
    }
    printf("\n");
  }
  return 0;
}