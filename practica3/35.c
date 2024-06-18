/* Escribir un programa que acepte un número arbitrario de argumentos. El programa calcula el producto de
los números tal como aparecen en la línea de comandos hasta encontrar un cero o hasta que se terminan los
argumentos. Luego del primer cero ignora el resto de los argumentos */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int suma = 0;
  for (int i = 1; i < argc ; i++) {
    int input = atoi(argv[i]);
    if (!input) {
      break;
    }
    suma += input;
  }
  printf("%i\n", suma);
  return 0;
}
