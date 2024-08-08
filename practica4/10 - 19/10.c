/* Escribir un programa que haga lo mismo que el programa echo de Linux */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    printf("%s ", argv[i]);
  }
  return 0;
}
