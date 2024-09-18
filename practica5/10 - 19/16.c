/* Escribir un programa en C que funcione como el comando head de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *fp = fopen(argv[1], "r");
  char ln[100];
  for (size_t i = 0; i < 10; i++) {
    if(fgets(ln, 100, fp) != NULL) {
      printf("%s", ln);
    }
  }
  fclose(fp);
  return 0;
}
