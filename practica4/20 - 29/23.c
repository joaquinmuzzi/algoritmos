#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
  char *meses[] = {
    "enero", "febrero", "marzo", "abril", "mayo", "junio",
    "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
  };
  int mes = atoi(argv[1]);
  printf("%s\n", meses[mes-1]);
  return 0;
}
