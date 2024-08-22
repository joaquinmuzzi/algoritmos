/* Escribir un programa que acepte un argumento 𝑝 (probabilidad) y un argumento 𝑛. Crear una matriz que represente un tablero del juego Buscaminas de 𝑛 × 𝑛 marcando con un -1 las casillas con minas o cero de lo contrario.
Usar la probabilidad 𝑝 para determinar si un casillero tiene o no una mina. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int p = atoi(argv[1]);
  int n = atoi(argv[2]);

  int tablero[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
      if ((rand() % 100) < p)
        tablero[i][j] = -1;
      else
        tablero[i][j] = 0;
      printf("%d\t", tablero[i][j]);
    }
    printf("\n\n\n");
  }
  return 0;
}
