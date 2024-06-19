/* Una función que decida si un número entero 𝑏 es divisor de otro entero 𝑎. */

#include <stdio.h>
#include <stdlib.h>

char* is_divisible(int a, int b){
    return a % b == 0 ? "Es divisible" : "No es divisible";
}

int main(int argc, char const *argv[]){
    printf("%s\n", is_divisible(atoi(argv[1]), atoi(argv[2])));
    return 0;
}

