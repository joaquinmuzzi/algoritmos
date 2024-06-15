/* Una función que devuelva un entero aleatorio en el intervalo [0, 𝑛) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran_num(int asintota){
    return rand() % asintota;
}

int main(int argc, char const *argv[]){
    srand(time(NULL));
    printf("%i\n", ran_num(atoi(argv[1])));
    return 0;
}
