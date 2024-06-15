/* Una función que calcule las raíces de una función cuadrática. Usar tres argumentos 𝑎, 𝑏 y 𝑐. Devolver NaN
si no hay raíces reales. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raices(double a, double b, double c){
    double discriminante = b * b - 4 * a * c;
    if(discriminante < 0){
      printf("NaN\n");
      return 1;
    }
    double raiz1 = ((-b - sqrt(discriminante))/ (2 * a));
    double raiz2 = ((-b + sqrt(discriminante))/ (2 * a));
    printf("%f, %f\n", raiz1, raiz2);
    return 0;
}

int main(int argc, char *argv[]){
    raices(atof(argv[1]), atof(argv[2]), atof(argv[3]));
    return 0;
}
