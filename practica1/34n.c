#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    int dias = atoi(argv[1]);
    printf("%i años ", dias / 365);
    dias %= 365;
    printf("%i semanas ", dias / 7);
    dias %= 7;
    printf("%i dias \n", dias);
    return 0;
}
