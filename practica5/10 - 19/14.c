/* Escribir un programa en C que funcione como el comando cp de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp1 = fopen(argv[1], "r");
  FILE *fp2 = fopen(argv[2], "w");
  
  char c;
  while ((c = getc(fp1)) != EOF) {
    putc(c, fp2);
  }
  
  fclose(fp1);
  fclose(fp2);
  return 0;
}