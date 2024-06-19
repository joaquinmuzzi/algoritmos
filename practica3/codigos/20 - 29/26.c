/* El problema de Basilea consiste en encontrar la suma exacta de los recíprocos de los cuadrados de los enteros
positivos. Implementar en C un programa que aproxime correctamente el número 𝜋 hasta 5
dígitos después de la coma. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  double PI = 3.14159;
  double suma = 0;
  double reciproco = 0;
  double es_igual_a_pi = 0;
  for (double i = 1.0; i <= n; i++) {
    reciproco = 1.0/(i*i); //calculo el reciproco
    suma += reciproco;  //le voy sumando el reciproco a una variable
    es_igual_a_pi = sqrt(suma * 6.0); //calculo PI despejando de la igualdad que propone Euler sobre Basilea
    printf("es %.5f igual que %.5f? ", es_igual_a_pi, PI);
    // si la diferencia entre es_igual_a_pi y PI es menor a 0.000001 entonces son iguales
    if(fabs(es_igual_a_pi - PI) < 0.000001){ 
      printf("SI\n");
      return 0;
    }
    printf("NO\n");
  }
  return 0;
}
