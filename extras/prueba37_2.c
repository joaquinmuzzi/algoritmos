#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  printf("Ingresar un numero\n");
  int n = atoi(argv[1]);
	for(int i = 1; i <= n; i++){
    printf("*");
    for(int j = 1; j < i; j++){
      printf(" *");
    }
    printf("\n");
	}
    printf("\n");
	return 0;
}