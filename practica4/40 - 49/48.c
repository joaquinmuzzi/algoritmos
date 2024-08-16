/* Escribir un programa que genere una matriz de 3 × 3 con números del 1 al 9 sin repetirse. Los números pueden
aparecer en cualquier lugar de la matriz. Generar la matriz de manera aleatoria. Decidir si la matriz generada es
un cuadrado mágico de 3 × 3. Un cuadrado mágico de 3 × 3 es un arreglo de los 9 números del 1 al 9, sin repetirse,
tal que las filas, las columnas y las dos diagonales suman 15. Existen 8 combinaciones posibles. */

#include <stdio.h>
#include <time.h>

void generar_matriz(matriz[3][3]) {
  for(size_t i = 0; i < 3; i++) {
    for(size_t j = 0; j < 3; j++) {
      int n = (rand() % 9) + 1;
      matriz[i][j] = n;
    }
  }
}

int verificar_matriz() {
  int resultados[8];
  resultados[0] = matriz[0][0] + matriz[0][1] + matriz[0][2];
  resultados[1] = matriz[1][0] + matriz[1][1] + matriz[1][2];
  resultados[2] = matriz[2][0] + matriz[2][1] + matriz[2][2];
  resultados[2] = matriz[0][0] + matriz[0][1] + matriz[0][2];
  resultados[3] = matriz[0][0] + matriz[0][1] + matriz[0][2];
  
  for(size_t i = 0; i < 8; i++) {
    if(resultados[i] != 15)
      return 0;
  }
  return 1;
}

imprimir_matriz(matriz) {
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
  generar_matriz(matriz);
  int es_valido = verificar_matriz(matriz);
  while(!es_valido){
    valido = verificar_matriz(matriz);
  }
  imprimir_matriz(matriz);
  return 0;
}