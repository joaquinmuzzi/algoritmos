/* Escribir un programa en C para jugar al ahorcado por línea de comandos. Usar un archivo de texto con una
palabra por línea como diccionario para el juego */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    srand(time(NULL));
    FILE *fp = fopen("diccionario.txt", "r");
    char word[20];
    int r = rand() % 20;
    for (int i = 0; i < 20; i++) {
      fscanf(fp, "%s", word);
      if (i == r) {
        break;
      }
    }
    printf("\n");
    int fails = 0;
    while (fails < 7){
      char c = getchar();
    for(int i = 0; word[i] != 0; i++){
      if(c == word[i]){
        printf("%c", c);
      }
      else{
        printf("_");
      }
    }
    printf("\n");
  }
  return 0;
}