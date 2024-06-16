/* Escribir un programa que acepte un entero positivo 𝑛 como argumento e imprima el mismo número en binario.
Para realizar la conversión tener en cuenta que un número en binario está expresado como suma de potencias
de dos. Primero buscar la potencia de dos más grande que entra en el número a convertir. Ese es el uno que está
más a la izquierda. Luego ir probando con las potencias de dos sucesivas en orden decreciente. Si sumamos una
potencia y no nos pasamos del número entonces va un uno, si nos pasamos va un cero. Repitiendo estos pasos
obtenemos la representación de 𝑛 en binario. */ 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  for (int i = 512; i >= 1; i /= 2) {
    if(n % i == 0){
      printf("1");
    }else{
      printf("0");
    }
  }
  printf("\n");
  return 0;
}
