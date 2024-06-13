#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool esPrimo(int n){
    bool res = true;
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            res = false;
            break;
        }
    }
    return res;
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%s\n", esPrimo(n) ? "Es primo" : "No es primo");
}


