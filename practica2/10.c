/* Escribir una función que acepte un entero 𝑏 y genere un número al azar 𝑟 en el intervalo [0, 36]. Si 𝑟 = 𝑏 entonces
devolver true, de lo contrario false. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool ran_num(int b){
    int r = rand() % 2; 
    return r == b ? true : false;
}

int main(int argc, char const *argv[]){
    srand(time(NULL));
    printf(ran_num(atoi(argv[1])) ? "True\n" : "False\n");
    return 0;
}
