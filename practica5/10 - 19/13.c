/* Escribir un programa en C que funcione como el comando cat de Unix */

#include <stdio.h>

int main(void) {
  char c;
  while ((c = getchar()) != EOF) {
    printf("%c", c);
  }
  return 0;
}