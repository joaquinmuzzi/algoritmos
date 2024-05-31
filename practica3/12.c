/*Escribir un programa que acepte como argumento un número entero e imprima el número con los digitos al
revés. Por ejemplo para la entrada 12345 debe imprimir 54321.*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    int num = atoi(argv[1]);
    int cifras = atoi(argv[2]);
    for(int i = 0; i <= cifras; i++){
      printf("%i", num % 10);
      num %= 10;
    }
    return 0;
}
