/* Escribir un programa que acepte dos números enteros positivos 𝑎 y 𝑏 y decida
si los números son capicúas, es decir que se leen igual de izquierda a derecha
que de derecha a izquierda. Dar el diagrama de flujo. */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int a_invertido = 0;
  while (a != 0) {
    a_invertido = (a_invertido * 10) + a % 10;;
    a /= 10;
  }
  printf("%s\n", a_invertido == atoi(argv[1]) ? "es capicua" : "no es capicua");
  return 0;
}