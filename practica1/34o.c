#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]){
    double horas   = atof(argv[1]);
    double salario = atof(argv[2]);
    double salarioTotal = horas * salario;
    printf("%.2f", salarioTotal);
    return 0;
}
