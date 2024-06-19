/* Que devuelva 1 si dos números 𝑎 y 𝑏 son iguales o 0 de lo contrario. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool same_numbers(int a, int b){
    return a == b; 
}

int main(int argc, char *argv[]){
    printf("%d\n", same_numbers(atoi(argv[1]), atoi(argv[2])));
    return 0;
}
