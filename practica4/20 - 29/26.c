/* Escribir un programa en C que usando un único enunciado printf imprima los goles de la Selección Argentina
en el Mundial de Catar como se muestra a continuación. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
  srand(time(NULL));
  char *fechas[5] = {"22/11", "26/11", "26/11", "30/11", "30/11"};
  char *jugadores[5] = {"L. Messi", "E. Fernandez", "F. Salinas", "A. Mac Allister", "J. Álvarez"};
  int minutos[5];
  
  for (int i = 0; i < 5; i++) {
    minutos[i] = i * rand() % 120;
    printf("%s - Gol de %s a los %d minutos\n", fechas[i], jugadores[i], minutos[i]);
  }
  
  return 0;
}
