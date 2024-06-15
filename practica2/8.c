/* Escribir un programa que simule tirar un dado “cargado”. Imprimir el resultado de tirar el dado. Tener en cuenta
que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){
    printf("%d", random());
    return 0;
}

int random(){
    srand(time(NULL));
    int rdm = (rand() % 8) + 1;
    return rdm > 5 ? 6 : rdm;
}
