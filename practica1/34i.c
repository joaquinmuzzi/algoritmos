/* Un programa que imprima el valor de sen(2𝑡) + sen(3𝑡). Siendo 𝑡 un argumento del programa, de tipo double. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  int z = atoi(argv[3]);
  printf("%s", x > y && y > z || x < y && y < z ? "Verdadero\n" : "Falso\n");
  return 0;
}
