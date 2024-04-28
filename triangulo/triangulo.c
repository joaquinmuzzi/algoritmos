/*Escribir un programa en C que reciba tres argumentos por consola y usando la desigualdad
triangular imprima si es triángulo o no, y si es triángulo entonces que imprima si es 
equilátero, isósceles o escaleno*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    printf("%s\n", a + b > c && a + c > b && b + c > a && (a == b && a == c && b == c) ? "Equilatero" :
        (a + b > c && a + c > b && b + c > a && (a == b || b == c || a == c )) ? "Isosceles" :
        (a + b > c && a + c > b && b + c > a && (a != b && a != c && b != c) ) ? "Escaleno" : "No es triángulo");
    return 0;
}
