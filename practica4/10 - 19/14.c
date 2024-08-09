/* Escribir un programa que reciba un string como argumento y cuente cuántas veces aparece cada letra en la
cadena. Ignorar dígitos o signos de puntuación. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  char alfabeto[26];
  int frecuencia[26];
  for (int i = 0; i < 26; i++) {
    alfabeto[i] = 'a' + i;
    frecuencia[i] = 0;
  }
  int i = 0;
  while (palabra[i] != 0) {
    frecuencia[palabra[i] - 'a']++;
    i++;
  }
  for (int i = 0; i < 26; i++){
    printf("%c\t%d\n", alfabeto[i], frecuencia[i]);
  }
  return 0;
}