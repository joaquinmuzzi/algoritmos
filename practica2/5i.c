//  Una función que devuelva el producto vectorial entre dos vectores en el espacio.

#include <stdio.h>
#include <stdlib.h>

void prod_vect(double x1, double x2, double x3, double y1, double y2, double y3){
    double i = x2 * y3 - x3 * y2;
    double j = -(x1 * y3 - y1 * x3);
    double k = x1 * y2 - x2 * y1;
    printf("El resultado es: %f %f %f", i, j, k);
}

int main(int argc, char *argv[]){
    prod_vect(atof(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]), atof(argv[6]));
    return 0;
}
