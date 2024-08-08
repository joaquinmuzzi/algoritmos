#include <stdio.h>
#include <stdlib.h>

void to_morse(char *palabra){

  char *morse[] = { 
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---","-.-", 
    ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-","..-", "...-", 
    ".--", "-..-", "-.--", "--.."
  };
  int i = 0;
  while(palabra[i] != 0){
    printf("%s ", morse[palabra[i]-'a']);
    i++;
  }
  printf("|");
}

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    to_morse(argv[i]);
  }
  printf("\n");
  return 0;
}
