#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    char* resultadoA = a >= b + c ? "Verdadero" : "Falso";
    char* resultadoB = b >= a + c ? "Verdadero" : "Falso";
    char* resultadoC = c >= a + b ? "Verdadero" : "Falso";
    printf("Es %i mayor o igual a la suma de %i y %i?: %s\n", a, b, c, resultadoA);
    printf("Es %i mayor o igual a la suma de %i y %i?: %s\n", b, a, c, resultadoB);
    printf("Es %i mayor o igual a la suma de %i y %i?: %s\n", c, a, b, resultadoC);
    return 0;
}
