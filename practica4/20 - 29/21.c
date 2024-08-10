/* Escribir una función que reciba como argumento un string y elimine el espacio en blanco al principio o al final
del mismo. */

// NO ENTIENDO LA CONSIGNA
// NO ENTIENDO LA CONSIGNA
// NO ENTIENDO LA CONSIGNA
// NO ENTIENDO LA CONSIGNA
// NO ENTIENDO LA CONSIGNA

#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *palabra = argv[1];
  int i = 0;
  while (palabra[i] != 0) {
    if (palabra[i] == 32){
      palabra[i] = 0;
    }
    i++;
  }
  printf("%s\n", palabra);
  return 0;
}

// NO SE QUE TENGO QUE HACER
// NO SE QUE TENGO QUE HACER
// NO SE QUE TENGO QUE HACER
// NO SE QUE TENGO QUE HACER