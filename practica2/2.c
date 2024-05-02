#include <stdio.h>
#include <stdlib.h>

void saludar(char* nombre){
    printf("Hola %s", nombre);
}

int main(int argc, char *argv[]){
    saludar(argv[1]);
    return 0;
}