/* Escribir un programa que lea un archivo por entrada estándar con un formato predefinido que consiste en
nombre nota_1 nota_2 dónde nombre es un string y nota_1 y nota_2 son enteros. Tabular por salida estándar
los datos que ingresan agregando una cuarta columna con el promedio de las dos notas. */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  system("cls");
  char buffer[100];
  int nota_1, nota_2;
  char nombre[15];
  FILE *fp = fopen(argv[1], "r");
  
  while (fscanf(fp, "%d %d %s", &nota_1, &nota_2, nombre) == 3)
    printf("%s\t%d\t%d\t%.2f\n", nombre, nota_1, nota_2, (double)((nota_1 + nota_2) / 2));
  
  fclose(fp);
  return 0;
}
