// Un programa suma los primeros 𝑛 números naturales. Al final imprime el valor de la suma.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int limite = atoi(argv[1]);
  int suma = 0;
  for(int i = 0; i <= limite; i++){
    suma += i;
  }
  printf("La suma es: %i\n", suma);
  return 0;
}
