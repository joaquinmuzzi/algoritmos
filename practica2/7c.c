/* Una función que devuelva un entero aleatorio en el intervalo [0, 10]. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ran_num(){
    return rand() % 11;
}

int main(int argc, char const *argv[]){
    srand(time(NULL));
    printf("%d\n", ran_num());
    return 0;
}
