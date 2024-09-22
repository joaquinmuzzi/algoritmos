/* Escribir un programa en C que funcione como el comando wc de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  FILE *fp = fopen(argv[1], "r");

  char ln[100];
  int lines = 0;
  int words = 0;
  int chars = 0;
  char c;
  int in_word = 0;
  while (1) {
    c = getc(fp);
    if (c == EOF) {
      lines++;
      break;
    }
    
    chars++;

    if (c == '\n') {
      lines++;
    }

    if (c == ' ' || c == '\t' || c == '\n') {
      in_word = 0;
    } else if (in_word == 0) {
      in_word = 1;
      words++;
    }
    
  }
  
  printf("%d\t%d\t%d\t%s", lines, words, chars, argv[1]);
  fclose(fp);
  return 0;
}
