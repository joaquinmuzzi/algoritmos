/*Un programa imprime una tabla con los números enteros positivos y su cuadrado, hasta un número 𝑛 leído
como argumento.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int limite = atoi(argv[1]);

  for(int i = 1; i <= limite; i++){
    printf("%i  |  %i\n", i, i*i);
  }
  return 0;
}
