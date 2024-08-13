/* Siguiendo el programa anterior, volver a recorrer el array para llenar los casilleros sin minas con el número de
minas vecinas. Consideren usar un array de (𝑛 + 2) × (𝑛 + 2) para representar el tablero. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void crear_tablero(int n, int tablero[n][n], int p) {
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++){
      tablero[i][j] = (rand() % 100) < p ? -1 : 0;
    }
  }
}

void contar_minas(int n, int tablero[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int minas_vecinas = 0;
      if (tablero[i][j] == -1) continue;
      if (tablero[i-1][j] == -1) {
        minas_vecinas++;
      }
      if (tablero[i-1][j+1] == -1) {
        minas_vecinas++;
      }
      if (tablero[i][j+1] == -1) {
        minas_vecinas++;
      }
      if (tablero[i+1][j+1] == -1) {
        minas_vecinas++;
      }
      if (tablero[i+1][j] == -1) {
        minas_vecinas++;
      }
      if (tablero[i+1][j-1] == -1) {
        minas_vecinas++;
      }
      if (tablero[i][j-1] == -1) {
        minas_vecinas++;
      }
      if (tablero[i-1][j-1] == -1) {
        minas_vecinas++;
      }
      
      tablero[i][j] = minas_vecinas;
    }
  }
}

void imprimir_tablero(int n, int tablero[n][n]) {
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      printf("%i\t", tablero[i][j]);
    }
    printf("\n\n\n");
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int p = atoi(argv[1]);
  int n = atoi(argv[2]) + 2;
  int tablero[n][n];
  crear_tablero(n, tablero, p);
  contar_minas(n, tablero);
  imprimir_tablero(n, tablero);
  
  return 0;
}