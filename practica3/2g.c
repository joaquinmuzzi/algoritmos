// Un programa suma los primeros 𝑛 números naturales. Al final imprime el valor de la suma.
// Números triangulares

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int limite = atoi(argv[1]);
  int suma = 1;
  for(int i = 1; i <= limite; i++){
    suma += i;
  }
  printf("La suma es: %i\n", suma);
  return 0;
}
