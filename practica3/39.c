/* Escribir un programa que acepte dos números enteros positivos 𝑎 y 𝑏 y decida
si los números son capicúas, es decir que se leen igual de izquierda a derecha
que de derecha a izquierda. Dar el diagrama de flujo. */
#include <stdio.h>
#include <stdlib.h>
char* es_capicua(int num){
  int num_original = num;
  int num_invertido = 0;
  while (num != 0) {
    num_invertido = (num_invertido * 10) + num % 10;
    num /= 10;
  }
  return num_invertido == num_original ? "es capicula" : "no es capicua";
}
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int a_invertido = 0;
  int b_invertido = 0;
  for (int i = 0; i < 2; i++) {
    int numero_actual = i ? a : b;    
    printf("%i %s\n", numero_actual, es_capicua(numero_actual));
  }
  return 0;
}