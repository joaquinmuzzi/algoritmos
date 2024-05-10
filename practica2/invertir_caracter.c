#include <stdlib.h>
#include <stdio.h>

char invertir(char c){
    return c^32;
}

int main(int argc, char *argv[]){
    printf("%c\n", invertir(argv[1][0]));
}
