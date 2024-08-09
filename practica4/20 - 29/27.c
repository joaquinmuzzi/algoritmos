/* Escribir un programa que imprima tres strings representando una mano de truco 
 * aleatoria, por ejemplo: "cuatro de copa", "ancho de espada", "tres de basto". */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  char mazo[40][30];
  char *palos[] = { "Espada", "Basto", "Copa", "Oro" };
  char *numeros[] = { "Ancho", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Sota",
                      "Caballo", "Rey"
                    };
  for (int i = 0; i < 40; i++) {
    char carta[30] = "";
    strcat(carta, numeros[i%10]);
    strcat(carta, " de ");
    strcat(carta, palos[i/10]);
    strcpy(mazo[i], carta);
  }
  for (int i = 0; i < 40; i++) {
    printf("%s\n", mazo[i]);
  }
  return 0;
}
