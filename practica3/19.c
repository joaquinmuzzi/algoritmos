/* Escribir un programa como el anterior pero que también reporte el mínimo y el promedio de los números ingresados. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int min = atoi(argv[1]);
  int i;
  double promedio = min;
  for (i = 2; i < argc; i++) {
    int input = atoi(argv[i]);
    min = min < input ? min : input;
    promedio += input;
  }
  promedio /= i-1;
  printf("el minimo es: %i\nel promedio es: %f\n", min, promedio);
}
