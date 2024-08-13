/* Escribir un programa que simule lo que se conoce como “caminos aleatorios”. Usar una matriz de números
enteros de 15 × 15 inicialmente llena de ceros. Poner un uno en el centro de la matriz e ir llenando con unos
representando los pasos del “caminante”. La caminata termina cuando se sale de la matriz original. El caminante
puede dar un paso a la vez a la izquierda, derecha, arriba o abajo. Pero no puede volver sobre sus pasos. Imprimir
la matriz que representa la caminata al terminar. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void crear_tablero(int n, int tablero[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++){
      tablero[i][j] = 0;
    }
  }
  tablero[n/2][n/2] = 1;
}

void caminar(int n, int tablero[n][n]) {

  int i = n/2;
  int j = n/2;
  int numero_de_paso = 2;
  while (i < n && i >= 0 && j < n && j >= 0) {
    int paso = rand() % 4;

    int ni = i;
    int nj = j;
    
    if (paso == 0) nj--;
    if (paso == 1) ni++;
    if (paso == 2) nj++;
    if (paso == 3) ni--;

    if (ni < 0 || ni >= n || nj < 0 || nj >= n) break;
    if (tablero[ni][nj] > 0) continue;

    tablero[ni][nj] = numero_de_paso;

    i = ni;
    j = nj;
    numero_de_paso++;
  }
}

void imprimir_tablero(int n, int tablero[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%i\t", tablero[i][j]);
    }
    printf("\n\n\n");
  }
}

int main(void) {
  srand(time(NULL));
  int caminata[15][15];

  crear_tablero(15, caminata);
  caminar(15, caminata);
  imprimir_tablero(15, caminata);
  
  return 0;
}
