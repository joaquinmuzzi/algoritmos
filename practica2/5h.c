// Una función que devuelva la suma entre dos vectores en el plano.

#include <stdio.h>
#include <stdlib.h>

void sum_esc(double x1, double x2, double y1, double y2){
    double a1 = x1 + y1;
    double a2 = x2 + y2;
    printf("El resultado es: %f %f", a1, a2);
}

int main(int argc, char *argv[]){
    sum_esc(atof(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[4]));
    return 0;
}
