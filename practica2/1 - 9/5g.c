/* Una función que devuelva el producto escalar entre dos vectores en el espacio. */

#include <stdio.h>
#include <stdlib.h>

void prod_esc(double x1, double x2, double x3, double y1, double y2, double y3){
    double a1 = x1 * y1;
    double a2 = x2 * y2;
    double a3 = x3 * y3;
    printf("El resultado es: %f %f %f", a1, a2, a3);
}

int main(int argc, char *argv[]){
    prod_esc(atof(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]), atof(argv[6]));
    return 0;
}
