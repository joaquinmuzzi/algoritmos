/* Escribir un programa que declara una matriz de diez filas y cinco columnas. La matriz guarda en las primeras
cuatro columnas números enteros entre 1 y 10 generados aleatoriamente en tiempo de ejecución. Representan
notas de un alumno. Cada fila representa las notas de un alumno. La quinta columna de la matriz es igual al
promedio de las cuatro notas en cada fila. El programa acepta dos argumentos, un valor semilla para srand()
y el nombre de un alumno. Si el alumno se encuentra la lista el programa imprime si el alumno aprueba o no y
con qué nota (promedio). El promedio debe ser un número de coma flotante. Si el alumno no está en la lista el
programa imprime “Alumno no encontrado” y termina. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int index_of(char *n, int c, char *nombres[c]) {
  for (int i = 0; i < c; i++) 
    if(strcmp(n, nombres[i]) == 0) return ++i;
}

bool exists_in_array(char *n, int c, char *nombres[c]) {
  for (int i = 0; i < c; i++) 
    if(strcmp(n, nombres[i]) == 0) return true;

  return false;
}

int main(int argc, char *argv[]){
  int s = atoi(argv[1]);
  char *nombre = argv[2];
  char *nombres[10] = {"muzzi", "pipe", "kevin", "ulises", "porta", "felipe", "luana", "mateo", "juan", "trini"};
  srand(s);
  double notas[11][5];
  int t = 0;
  
  printf("\t");

  for (size_t i = 1; i < 6; i++) {
    if (i!=5) {
      printf("bim. %i\t", i);
      continue;
    }
    printf("promedio");
  }
  
  printf("\n");

  for (size_t i = 1; i <= 10; i++) {
    printf("%s:\t", nombres[t]);
    for (size_t j = 0; j < 5; j++) {
      double nota = (rand() % 10) + 1;
      if (j < 4) {
        notas[i][j] = nota;
        printf("%.2f\t", notas[i][j]);
      } else {
        double promedio = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4;
        notas[i][j] = promedio; 
        printf("%.2f\t", notas[i][j]);
      }
    }
    t++; 
    printf("\n");
  }

  if (!exists_in_array(nombre, 10, nombres)) {
    printf("Alumno no encontrado");
    return 1;
  }

  double promedio = notas[index_of(nombre, 10, nombres)][4];
  char *estado = promedio >= 6 ? "aprobado" : "desaprobado";
  printf("El alumno %s está %s con un %.2f de promedio", nombre, estado, promedio);
  return 0;
}