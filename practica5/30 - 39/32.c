/* Escribir un programa que acepte de entrada estándar un número arbitrario de líneas conteniendo letras minísculas y mayúsculas. Invertir el proceso del programa anterior enviando a salida estándar el resultado de la
descompresión. El resultado de conectar ambos programas con un pipe debe ser el archivo de texto original. */

#include <stdio.h>

int main() {
  char repeat;
  int i = 0;
  int c;
  while ((c = getchar()) != EOF) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
      printf("%c", c);
      repeat = c;
    } else if (c >= '0' && c <= '9'){
      int count = c - '0';
      for (size_t i = 0; i < count; i++) {
        printf("%c", repeat);
      }
    }
  }
  return 0;
}