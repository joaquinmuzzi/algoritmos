/* Escribir una función en C que calcule y devuelca x^n, siendo x un número real y n un número natural. */
#include <stdio.h>
#include <stdlib.h>

double power(double x, int n){
    double resultado = x;
    for (int i = 1; i < n; i++){
        resultado *= x;
    }
    return resultado;    
}
int main(int argc, char *argv[]){
int x = atoi(argv[1]);
int y = atoi(argv[2]);
printf("%.2f", power(x, y));
return 0;
}
