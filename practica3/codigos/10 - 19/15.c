/* Dar el diagrama de flujo para un programa que imprime la matriz identidad de 𝑛 × 𝑛. Usar dos loops anidados con
variables de control 𝑖 y 𝑗. Implementar el programa en C, siendo 𝑛 un entero ingresado por línea de comandos. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  int n = atoi(argv[1]);
  int num = 1;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n; j++){
      printf(i == j ? "1 " : "0 ");
    }
    printf("\n");
  }
  return 0;
}
