/*Implementar en C el programa que calcule el factorial de 𝑛, siendo 𝑛 un entero mayor o igual a cero. Si el
argumento 𝑛 ingresado por línea de comandos es menor a cero imprimir “Error”. Dar el diagrama de flujo del
programa.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[0]){
  int n = argv[1];
  if (n < 0){
    printf("Error\n");
    return 1;
  }
  for (int i = n; i > 0; i++){
    
  }
  return 0;
}

