// Escribir un programa en C que imprima “Hola, <nombre>”, siendo <nombre> un argumento de línea de comandos.

#include <stdio.h>

int main(int argc, char const *argv[]){
    printf("Hola, %s", argv[1]);
    return 0;
}
