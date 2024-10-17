/* Escribir una versión recursiva en C de la función int sum(int n) que devuelva la suma de los primeros 𝑛 números
naturales. Comparar esta función con su versión iterativa. ¿Existe alguna forma más eficiente de escribir esta
función? */

#include <stdio.h>
#include <stdlib.h>

int sum(int n) {
    if(n == 0) return 0;
    return sum(n-1) + n;
}

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    printf("%d", sum(n));
    return 0;
}
