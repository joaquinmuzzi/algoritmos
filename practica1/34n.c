/* Un programa que acepte como argumento un número entero de días. El programa debe imprimir la cantidad de años, semanas y días correspondiente. Ignorar los años bisiestos. Por ejemplo para 375 días como entrada, el programa imprime: “1 año, 1 semana, 3 días”. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  int dias = atoi(argv[1]);
  printf("%i años ", dias / 365);
  dias %= 365;
  printf("%i semanas ", dias / 7);
  dias %= 7;
  printf("%i dias \n", dias);
  return 0;
}
