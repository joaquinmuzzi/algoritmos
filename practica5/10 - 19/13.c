/* Escribir un programa en C que funcione como el comando cat de Unix */

#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen(argv[1], "r");

  char c;
  while ((c = getc(fp)) != EOF) {
    putchar(c);
  }
  return 0;
}