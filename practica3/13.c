#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%s\n", is_prime(n) ? "Es primo" : "No es primo");
}


