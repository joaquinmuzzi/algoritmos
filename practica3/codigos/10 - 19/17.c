/*  Escribir un programa en C que imprima una tabla con los valores de las funciones: ln 𝑛, 𝑛, 𝑛 ln 𝑛, 𝑛^2, 𝑛^3, 2^𝑛 para
los valores de 𝑛: 1, 2, 4, 8, 16, 32, 64. Usar caracteres \t para alinear las columnas y las funciones pow() y log()
de math.h. Dar el diagrama de flujo. */
#include <stdio.h>
#include <math.h>

int main() {
  int multiplicador = 2;
  printf("ln(n)\tn\tn ln(n)\tn^2\t\tn^3\t\t2^n\n");
  printf("-----------------------------------------------------------------\n");
  for (int i = 0; i < 7; i++) {
    double n = pow(multiplicador, i);
    double ln_n = log(n);
    double n_ln_n = n * ln_n;
    double n2 = pow(n, 2);
    double n3 = pow(n, 3);
    double dos_n = pow(2, n);
    printf("%.2f\t", ln_n);
    printf("%.2f\t", n);
    printf("%.2f\t", n_ln_n);
    printf("%.2f\t\t", n2);
    printf("%.2f\t\t", n3);
    printf("%.2f\n", dos_n);
  //printf("%d\t%.4f\t%d\t%.4f\t%.4f\t%.4f\t%.0f\n", ln_n, n, n_ln_n, n2, n3, dos_n);
  }
  return 0;
}

