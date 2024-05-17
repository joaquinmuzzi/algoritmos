#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number() {
    return rand();
}

int main(void) {
    srand(time(NULL));
    
    printf("%d\n", random_number());
    
    return 0;
}
