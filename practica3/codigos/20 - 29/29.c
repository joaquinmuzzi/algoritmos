/* Escribir un programa que imprima el 𝑛-ésimo número armónico. Es decir la suma de los recíprocos de los
primeros 𝑛 números naturales. */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  double suma = 0.0;
  double n = atof(argv[1]);
  for (double i = 1.0; i <= n; i++) {
    suma += 1 / i;
  }
  printf("%.4f", suma);
  return 0;
}
