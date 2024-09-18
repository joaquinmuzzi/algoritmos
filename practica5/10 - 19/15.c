/* Escribir un programa en C que funcione como el comando nl de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  FILE *fp = fopen(argv[1], "r");

  char ln[100];
  int cln = 0;
  while (fgets(ln, 100, fp) != NULL) {
    cln++;
  }
  printf("%d", cln);
  fclose(fp);
  return 0;
}
