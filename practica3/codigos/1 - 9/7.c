/*Escribir un programa que imprima los números entre el 1000 y el 1999, mostrando 5 números por línea. Dar el
diagrama de flujo.*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
  for(int i = 1000; i < 2000; i++){
    printf("%i ", i);
    if(i % 5 == 0){
      printf("\n");
    }
  }
  return 0;
}
