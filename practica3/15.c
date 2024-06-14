#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    int num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf(i == j ? "1 " : "0 ");
        }
        printf("\n");
    }
    
    return 0;
}