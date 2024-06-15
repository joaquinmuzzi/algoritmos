/*Escribir una función en C, saludar() que imprima un saludo en pantalla. La función debe aceptar un argumento
de tipo string e imprimir Hola, <arg>. Por ejemplo, la llamada a saludar("Juan") imprime Hola, Juan.*/

#include <stdio.h>
#include <stdlib.h>

void saludar(char* nombre){
    printf("Hola %s", nombre);
}

int main(int argc, char *argv[]){
    saludar(argv[1]);
    return 0;
}
