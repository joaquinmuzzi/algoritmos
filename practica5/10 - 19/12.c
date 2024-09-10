/* Escribir un programa en C que imprima un menú con cinco opciones y una sexta para salir del programa. El
programa imprime el menú y espera la entrada del usuario para elegir una de las seis opciones, imprime algo
distinto según la opción y repite el menú. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *respuestas[5] = {"Hola", "Como estas", "Chau", "Me quede sin ideas", "Santiago vs Fabiola"};
  printf("1. %s\n2. %s\n3. %s\n4. %s\n6. Salir\n", respuestas[0], respuestas[1], respuestas[2], respuestas[3]);
  int n = 0;
  while (scanf("%d", &n) != 6 ) {
    if (n > 6 || n < 0) {
      printf("Ingresa un numero valida\n");
      continue;
    }
    printf("%s\n", respuestas[n-1]);
  }
  
  return 0;
}