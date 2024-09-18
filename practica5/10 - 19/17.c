/* Escribir un programa en C que funcione como el comando tail de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *fp = fopen(argv[1], "r");
  long position;
  int count_lines = 0;
  int c;

  fseek(fp, 0, SEEK_END);
  position = ftell(fp);

  while (count_lines < 10) {
    fseek(fp, --position, SEEK_SET);
    c = getc(fp);
    printf("%c", c);
    
    if (c == '\n') count_lines++;
  }

  fclose(fp);
  return 0;
}
