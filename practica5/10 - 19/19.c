/*  Escribir un programa en C para jugar al ahorcado por línea de comandos. Usar un archivo de texto con una
palabra por línea como diccionario para el juego */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indice_de(char ch, char *string) {
  int i = 0;
  while (string[i] != 0) {
    if (ch == string[i]) return i;
    i++;
  } 
  return -1;  
}

int main(int argc, char const *argv[]) {
  char *palabra = "joaquin";
  int tamano = strlen(palabra);
  char respuesta[tamano];
  char ch;
  int indice;
  for (size_t i = 0; i < tamano; i++) {
    respuesta[i] = '_';
  }
  

  puts("AHORCADO");
  puts("ingresa una letra: ");
  scanf("%c", &ch);

  if ((indice = indice_de(ch, palabra)) >= 0) {
    respuesta[indice] = ch;
    for (size_t i = 0; i < tamano; i++) {
      printf("%c", respuesta[i]);
    }
  }
  else {
    printf("la letra %c es incorrecta", ch);
  }
  return 0;
}