/* Un programa que acepte 5 argumentos enteros e imprima la suma solamente de los argumentos que sean impares. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);
  int suma = 0;
  suma += a % 2 != 0 ? a : 0; 
  suma += b % 2 != 0 ? b : 0; 
  suma += c % 2 != 0 ? c : 0; 
  suma += d % 2 != 0 ? d : 0; 
  suma += e % 2 != 0 ? e : 0;
  printf("La suma de los numeros impares es: %i\n", suma);
  return 0;
}
