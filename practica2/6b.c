/* Escribir un programa en C que reciba tres argumentos por consola y usando la desigualdad
triangular imprima si es triángulo o no */

#include <stdio.h>
#include <stdlib.h>

char* is_triangle(int a, int b, int c){
    return (a + b > c && a + c > b && b + c > a) ? "Triángulo" : "No es triángulo";
}

int main(int argc, char const *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    printf("%s\n", is_triangle(a, b, c));
    return 0;
}
