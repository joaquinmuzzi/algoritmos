/* Escribir un programa que acepte dos números enteros positivos 𝑎 y 𝑏 y decida
si los números son capicúas, es decir que se leen igual de izquierda a derecha
que de derecha a izquierda. Dar el diagrama de flujo. */
#include <stdio.h>
#include <stdlib.h>
char* es_capicua(int num){
  int num_original = num;
  int num_invertido = 0;
  int digito;
  while (num != 0) {
    digito = num % 10; // toma el ultimo digito de num
    num_invertido = (num_invertido * 10) + digito; // recrea el numero invertido
    num /= 10; // "elimina" el ultimo digito de num
  }
  //si el numero invertido es igual al original entonces es capicua
  return num_invertido == num_original ? "es capicula" : "no es capicua";
}
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  for (int i = 0; i < 2; i++) { // for se ejecuta 2 veces porque los argumentos del programa son 2 v:
    int numero_actual = i ? a : b; // si i vale 0 entonces trabaja con 'a' y si vale 1 con 'b'
    printf("%i %s\n", numero_actual, es_capicua(numero_actual));
  }
  return 0;
}