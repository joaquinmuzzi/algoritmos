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
    int rdm = (rand() % 7) + 1;
    return rdm == 6 || rdm == 7 || rdm == 8 ? 6 : rdm;
}