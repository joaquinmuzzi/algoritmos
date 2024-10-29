/* Escribir una función en C int catalan(int n) que devuelva el enésimo número de Catalan. Los primeros doce números
de Catalan son 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786. Estos números satisfacen la siguiente relación recursiva. */

#include <stdio.h>
#include <stdlib.h>

int n_catalan(int n) {
  if (n == 0) return 1;
  int resultado = 0;
  for (int i = 0; i < n; i++) {
    resultado += n_catalan(i)*n_catalan(n-i-1);
  }
  
  return resultado;
}

int main(int argc, char const *argv[]) {
  printf("%d", n_catalan(atoi(argv[1])));
  return 0;
}