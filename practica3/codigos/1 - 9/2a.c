//Un programa que imprime el valor absoluto de un número entero 𝑎 que acepta como argumento.

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]){
  //DECLARO LA VARIABLE
  int a = atoi(argv[1]);
  //SI ES NEGATIVO LO MULTIPLICO POR -1
  if (a < 0){
    a *= -1;
  }
  printf("%i\n", a);
  return 0;
}
