/* Una función que devuelva un entero aleatorio en el intervalo [0, 100). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran_num(){
    return rand() % 100;
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    printf("%d\n", ran_num());
    return 0;
}
