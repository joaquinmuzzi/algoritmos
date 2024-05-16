<<<<<<< HEAD
double cuadraticFunc(double a, double b, double c){
    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    return "Primera raiz: %f\n Segunda raiz: %f\n", x1, x2;
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void raices(double a, double b, double c){
    double discriminante = b * b - 4 * a * c;
    double raiz1 = ((-b + sqrt(discriminante))/ (2 * a));
    double raiz2 = ((-b + sqrt(discriminante))/ (2 * a));

    printf("%f, %f", raiz1, raiz2);
}

int main(int argc, char *argv[]){
    raices(atof(argv[1]), atof(argv[2]), atof(argv[3]));
    return 0;
}

>>>>>>> 80b037c461e012b520220f378f2e852fd5cb8f42
