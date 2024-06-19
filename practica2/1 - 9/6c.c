/* Una función que acepte un año y decida si es bisiesto o no. */

#include <stdio.h>
#include <stdlib.h>

char* es_bisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? "Es bisiesto" : "No es bisiesto";
}

int main(int argc, char const *argv[]){
    printf("%s\n", es_bisiesto(atoi(argv[1])));
    return 0;
}
