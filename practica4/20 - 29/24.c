#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  char *morse[] = { 
    ".-", 
    "-...", 
    "-.-.", 
    "-..", 
    ".", 
    "..-.", 
    "--.", 
    "....", 
    "..", 
    ".---",
    "-.-", 
    ".-..", 
    "--", 
    "-.", 
    "---", 
    ".--.", 
    "--.-", 
    ".-.", 
    "...", 
    "-",
    "..-", 
    "...-", 
    ".--", 
    "-..-", 
    "-.--", 
    "--.."
  };
  int i = 0;
  printf("%lu\n", sizeof(morse) / sizeof(char *));
  while(palabra[i] != 0){
    printf("%s ", morse[palabra[i]-'a']);
    i++;
  }
  printf("\n");
  return 0;
}
