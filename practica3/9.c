/*Escribir un programa que use un ciclo for para imprimir los primeros 𝑛 números de Fibonacci, siendo 𝑛 un
argumento entero del programa. La sucesión de Fibonacci está definida de la siguiente manera.*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    // declaro el iterador i, la variable f y temp que es el valor temporal del resultado de los dos anteriores
    int n = atoi(argv[1]);
    int f = 0;
    int g = 0;
    int temp = 0;
    for(int i = 0; i <= n; i++){
        g = f;
        f = i;
        printf("%i\n", i+f);
    }
    return 0;
}
