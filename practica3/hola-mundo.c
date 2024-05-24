#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char * argv[]){
    int n = atoi(argv[1]);
    double i = 1;
    double suma = 0;
    srand(time(NULL));

    while(i < n){
        int r = rand() % 100;
        printf("%d\n ", r);
        suma += r;
        i++;    
    }
    
    suma /= i;
    printf("el promedio es %f", suma);
    return 0;
}

