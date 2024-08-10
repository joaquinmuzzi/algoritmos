/*  Escribir una función to_lower_case() que convierta una palabra a todas letras minúsculas. Ignorar dígitos o
signos de puntuación */

#include <stdio.h>
#include <stdbool.h>

bool is_letter(char letra){
  printf("codigo decimal de la letra %c: %i\n", letra, letra);
  return (letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z');
}

char invertir(char c){
    return c^32;
}

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  int i = 0;
  while (palabra[i] != 0) {
    if (is_letter(palabra[i]))
      palabra[i] = invertir(palabra[i]);
    i++;
  }
  printf("%s\n", palabra);
  return 0;
}
