/* Escribir un programa que acepte dos números enteros 𝑎 y 𝑏 y calcule su cociente. Si la división de los números
no tiene resto igual a cero entonces imprimir “No se pueden dividir” y salir del programa. Por ejemplo, 𝑎 = 20,
𝑏 = 5 debe imprimir “4”. Con 𝑎 = 20 y 𝑏 = 3 debe imprimir “No se pueden dividir”. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  double cociente = a / b;
  double resto = a % b;
  if(resto != 0){
    printf("No se pueden dividir\n");
    return 1;
  }
  printf("%.0f\n", cociente);
  return 0;
}
