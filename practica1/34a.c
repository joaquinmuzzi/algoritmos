#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    char* resultadoA = a % b == 0 ? "Verdadero\n" : "Falso\n";
    char* resultadoB = b % a == 0 ? "Verdadero\n" : "Falso\n";
    printf("Es divisible %i / %i?: %s", a, b, resultadoA);
    printf("Es divisible %i / %i?: %s", b, a, resultadoB);
    return 0;
}