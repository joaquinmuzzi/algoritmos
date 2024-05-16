#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cuadraticFunc(int a, int b, int c){
    int x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    int x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("%s\n", x1 == NAN || x2 == NAN ? "Primera raiz: %f\n Segunda raiz: %f\n", x1, x2 : "NaN");
}

int main(int argc, char const *argv[]){
    cuadraticFunc(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    return 0;
}
