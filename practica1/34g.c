/* Un programa que acepte dos argumentos: día y mes (ambos de tipo int). Imprimir “verdadero” si la fecha está entre el 20 de marzo y el 20 de junio, o “falso” de lo contrario. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int dia = atoi(argv[1]);
  int mes = atoi(argv[2]);
  char* compruebaFecha = (dia > 20 && mes == 3) || (mes > 3 && mes < 6) || (dia < 20 && mes == 6) ? "Verdadero" : "Falso";
  printf("La fecha está entre el 20 de abril y el 20 de junio? %s\n", compruebaFecha);
  return 0;
}
