/* Escribir un programa en C que acepte dos argumentos. Un entero 𝑛, y un string. El programa debe realizar
el cifrado del segundo argumento usando un cifrado de desplazamiento, siendo la cantidad a desplazar 𝑛. El
segundo argumento es siempre una palabra que consiste solo de letras del alfabeto inglés, todas en minísculas.
Imprimir la palabra cifrada. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  char* codigo = argv[1];
  int desplazamiento = atoi(argv[2]);
  for (int i = 0; i < strlen(codigo); i++){
    int caracter_desplazado = codigo[i] + desplazamiento;
    
    // Si se pasa de la 'z' vuelve a 'A'
    if (caracter_desplazado > 122){
      caracter_desplazado -= 58;
    }
    if (codigo[i] < 65 || codigo[i] > 122){
      continue;
    }
    
    codigo[i] = caracter_desplazado;
  }
  printf("%s\n", codigo);
  return 0;
}