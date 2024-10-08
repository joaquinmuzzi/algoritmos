/* Escribir un programa en C para tomar notas. Usar un menú para elegir entre tomar notas, ver notas, borrar notas y salir. Almacenar las notas en un archivo de texto */

#include <stdio.h>
#include <stdlib.h>

void agregar_nota() {
  char nota[100];
  FILE *fp = fopen("24.txt", "a");
  printf("Escribe tu nota: \n");
  fgets(nota, 100, stdin);
  fprintf(fp, "%s", nota);
  fclose(fp);
}

void imprimir_notas() {
  FILE *fp = fopen("24.txt", "r");
  char linea[100];
  printf("\n");
  while (fgets(linea, 100, fp)) {
    printf("%s", linea);
  }
}

void borrar_nota() {
  FILE *fp = fopen("24.txt", "r");
  printf("Cual linea quieres borrar: \n");
  char linea[100];
  for (int i = 1; fgets(linea, 100, fp); i++) {
    printf("%d. %s", i, linea);
  }
  int nota_borrar;
  scanf("%d", &nota_borrar);
  fclose(fp);
  FILE *fp1 = fopen("24.txt", "r");
  FILE *fp2 = fopen("temp.txt", "w");
  for (int i = 1; fgets(linea, 100, fp1) != NULL; i++) {
    if (i != nota_borrar) 
      fprintf(fp2, "%s", linea);
  }
  fclose(fp1);
  fclose(fp2);
  remove("24.txt");
  rename("temp.txt", "24.txt");
  printf("Linea borrada");
  getchar();
}

int main(int argc, char *argv[]) {
  system("cls");
  int accion;
  char linea[100];
  printf("Anotador\n\n");
  printf("1. Tomar nota\n");
  printf("2. Ver mis notas\n");
  printf("3. Borrar nota\n");
  printf("4. Salir\n");
  scanf("%d", &accion);
  getchar();
  
  switch (accion) {
  case 1:
    agregar_nota();
    break;
  
  case 2:
    imprimir_notas();
    break;

  case 3:
    borrar_nota();
    break;

  case 4:
    return 0;
  default:
    puts("Opcion incorrecta, presione enter para continuar");
    getchar();
  }

  return 0;
}
