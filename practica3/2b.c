/* Un programa que imprima el máximo de tres argumentos enteros 𝑎, 𝑏 y 𝑐. */

#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b) { return a > b ? a : b; }

int main(int argc, char const *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    printf("El maximo de %d %d %d es %d\n",a,b,c,maximo(c,maximo(a,b)));
    return 0;
}
