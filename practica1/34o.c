/* Un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora. El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  double horas   = atof(argv[1]);
  double salario = atof(argv[2]);
  double salarioTotal = horas * salario;
  printf("%.2f", salarioTotal);
  return 0;
}
