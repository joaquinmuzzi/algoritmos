/*Escribir un programa que acepte dos argumentos enteros 𝑎 y 𝑏 con 𝑏 > 𝑎. El programa debe imprimir todos los
números divisibles por 3 en el intervalo [𝑎, 𝑏]. Si 𝑎 es mayor a 𝑏 el programa debe imprimir un mensaje indicando
al usuario el uso correcto del programa y salir.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    // si a es mayor o igual a b devuelve error
    if(a >= b){
        printf("el primer numero ingresado tiene que ser menor al segundo");
        return 1;
    }
    // mientras a sea menor o igual a b
    while(a <= b){
        // si a es multiplo de 3 imprime a
        if(a % 3 == 0){
            printf("%i\n", a);
        }
        a++;
    }
    return 0;
}