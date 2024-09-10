/* Escribir un programa en C que cuente la cantidad de líneas en stdin */

#include <stdio.h>

int main() {
  int c;
  int line_count = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      line_count++;
    }
  }
  printf("Cantidad de saltos de linea: %d\n", line_count);
  return 0;
}