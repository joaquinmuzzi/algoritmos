/*Implementar en C el programa que calcule el factorial de 𝑛, siendo 𝑛 un entero mayor o igual a cero. Si el
argumento 𝑛 ingresado por línea de comandos es menor a cero imprimir “Error”. Dar el diagrama de flujo del
programa.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[0]){
  //DECLARO VARIABLES
  int n = atoi(argv[1]);
  int fact = 1;
  //SI EL INPUT ES MENOR A CERO TIRA ERROR
  if (n < 0){
    printf("Error\n");
    return 1;
  }
  //BUCLE QUE MULTIPLICA FACT POR EL ITERADOR i
  for (int i = 1; i <= n; i++){
    fact *= i;
    printf("%i\n", fact);
  }
  return 0;
}

