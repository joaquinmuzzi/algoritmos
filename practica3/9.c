/*Escribir un programa que use un ciclo for para imprimir los primeros 𝑛 números de Fibonacci, siendo 𝑛 un
argumento entero del programa*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    // Declaro la variable g, f  y temp que es el valor temporal del resultado de los dos anteriores
    int num = atoi(argv[1]);
    int g = 1;
    int f = 0;
    int temp = 0;
    // mientras i sea menor o igual al input del usuario
    for(int i = 1; i <= num; i++){
        printf("%i\n",f);
        temp = g + f; // temp toma el resultado de la suma de los dos valores anteriores en la sucesión
        g = f; // g pasa a valer f, osea toma el puesto del anterior valor al actual
        f = temp; // f pasa a valer temp
    }
    return 0;
}
