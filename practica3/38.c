/* Escribir un programa que imprima el abecedario del español en una sola línea separando cada letra con un
espacio. */
#include <stdio.h>
int main(int argc, char *argv[]){
  for (int i = 97; i <= 122; i++) {
    printf("%c ", i);
  }
  printf("\n");
  return 0;
}