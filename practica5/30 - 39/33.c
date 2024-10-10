/* Escribir un programa que lea un archivo CSV (comma separated values) con los siguientes datos: Grupo, PJ, G,
E, P, GF, GC, DG y Pts. Todos son números enteros.
Almacenar los datos leídos en una matriz de 8 × 9. Imprimir la tabla tal como se cargó en la matriz agregando
una columna al principio con el nombre del país. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *fp = fopen("33.txt", "r");
  int matriz[8][9];
  int datos[8];
  char pais[20];
  int i = 0;
  while (fscanf(fp, "%d,%d,%d,%d,%d,%d,%d,%d,%s", &datos[0], &datos[1], &datos[2], &datos[3], &datos[4] , &datos[5], &datos[6], &datos[7], pais) != EOF) {
    // datos = {1,3,2,0,1,5,1,4,argentina}
    printf("pais %s:\t", pais);
    for (int j = 0; j < 8; j++) {
      matriz[i][j] = datos[j];
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
    i++;
  }
  return 0;
}
