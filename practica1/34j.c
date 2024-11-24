/* Un programa que acepte tres argumentos de tipo double: 𝑥0, 𝑣0 y 𝑡. Imprimir el resultado de 𝑥0 + 𝑣0𝑡 − 1/2𝑔𝑡^2 con la constante 𝑔 = 9,80665. Es decir el resultado de la ecuación de tiro vertical con posición inicial 𝑥0 y velocidad inicial 𝑣0. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int flag = a;
  printf("Los valores iniciales son: %i y %i\n", a, b);
  a = b;
  b = flag;
  printf("Los valores finales son: %i y %i\n", a, b);
  return 0;
}
