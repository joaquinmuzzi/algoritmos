#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){
    printf("%d", random());
    return 0;
}

int random(){
    srand(time(NULL));
    int rdm = (rand() % 8) + 1;
    return rdm > 5 ? 6 : rdm;
}