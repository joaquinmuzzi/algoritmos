#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int flag = a;
    printf("Los valores iniciales son: %i y %i\n", a, b);
    a = b;
    b = flag;
    printf("Los valores finales son: %i y %i\n", a, b);
    return 0;
}
