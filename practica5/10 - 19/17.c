/* Escribir un programa en C que funcione como el comando tail de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *fp = fopen(argv[1], "r");
  int c, lines = 0;
  int n = atoi(argv[2]);
  while ((c = fgetc(fp)) != EOF)
    if (c == '\n') lines++;
  fclose(fp);
  char line[100];
  fp = fopen(argv[1], "r");
  for (int i = 0; i < lines; i++) {
    fgets(line, 100, fp);
    if (i >= lines - n)
      printf("%s", line);
  }
  fclose(fp);
  return 0;  
}
