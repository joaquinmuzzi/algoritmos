#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
    double a, resultado;
    a = atof(argv[1]);
    resultado = pow(cos(a), 2) + pow(sin(a), 2);
    printf("El valor es: %f\n", resultado);
    return 0;
}
