#include <stdio.h>
#include <stdlib.h>

int promedio(int i, int array[], int n, int total) {
    if (i == total) { 
        return n / total; 
    }
    return promedio(i + 1, array, n + array[i], total); 
}

int main(int argc, char *argv[]) {
    int i = 0;  
    int n = 0;  
    int total = 3; 
    int array[] = {1, 2, 3};  
    printf("%d\n", promedio(i, array, n, total)); 
    return 0;
}
