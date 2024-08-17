/* Escribir un programa que genere una matriz de 3 × 3 con números del 1 al 9 sin repetirse. Los números pueden
aparecer en cualquier lugar de la matriz. Generar la matriz de manera aleatoria. Decidir si la matriz generada es
un cuadrado mágico de 3 × 3. Un cuadrado mágico de 3 × 3 es un arreglo de los 9 números del 1 al 9, sin repetirse,
tal que las filas, las columnas y las dos diagonales suman 15. Existen 8 combinaciones posibles. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int existe_en_matriz(int matriz[3][3], int num) {
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            if (matriz[i][j] == num) return 1;
        }
    }
    return 0;
}

void generar_matriz(int matriz[3][3]) {
  for(size_t i = 0; i < 3; i++) {
    for(size_t j = 0; j < 3; j++) {
      int n;
      do {
        n = (rand() % 9) + 1;
      } while(existe_en_matriz(matriz, n));
      matriz[i][j] = n;
    }
  }
}

int verificar_matriz(int matriz[3][3]) {
  // verifico filas y columnas
  for (size_t i = 0; i < 3; i++) {
    int sf = 0;
    int sc = 0;
    for (size_t j = 0; j < 3; j++) {
      sf += matriz[i][j];
      sc += matriz[j][i];
    }
    if (sf != 15 || sc != 15) return 0;
  }

  // verifico diagonales
  int sd1 = 0;
  int sd2 = 0;
  for (size_t i = 0; i < 3; i++) {
    sd1 += matriz[i][i];
    sd2 += matriz[i][2 - i];
  }
  if (sd1 != 15 || sd2 != 15) return 0;

  return 1;
}

void imprimir_matriz(int matriz[3][3]) {
  for(size_t i = 0; i < 3; i++) {
    for(size_t j = 0; j < 3; j++) {
      printf("%i\t", matriz[i][j]);
    }
    printf("\n\n\n");
  }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int matriz[3][3];
    int es_valido;

    do {
        generar_matriz(matriz);
        es_valido = verificar_matriz(matriz);
    } while(!es_valido);
    
    imprimir_matriz(matriz);
    return 0;
}