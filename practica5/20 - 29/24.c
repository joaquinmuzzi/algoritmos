/* Escribir un programa en C para tomar notas. Usar un menú para elegir entre tomar notas, ver notas, borrar notas
y salir. Almacenar las notas en un archivo de texto */

#include <stdio.h>
#include <stdlib.h>

void presskey() {
  getchar();
  puts("Presiona cualquier tecla para continuar");
  getchar();
}

void print_menu() {
  puts("0 - Ver notas");
  puts("1 - Tomar notas");
  puts("2 - Borrar notas");
  puts("3 - Salir");
}

int main(void){
  while (1) {
    int choice;
    system("clear");
    print_menu
  }
  


  int choice;
  char notas[100][50];
  print_menu();
  scanf("%d", &choice);
  switch (choice) {
  case 0:
    int length = sizeof(notas)/sizeof(notas[0]);
    if (length == 0) {
      puts("No hay notas");
    }
    for (size_t i = 0; i < length; i++) {
      printf("%s\n", notas[i]);
    }
    break;
  case 1:

    break;

  case 2:

    break;

  case 3:

    break;
  default:
    return 1;
  }
  return 0;
}
