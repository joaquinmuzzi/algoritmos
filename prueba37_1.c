#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  printf("Ingresar un numero entre 1 y 10 incluidos\n");
  int n = atoi(argv[1]);
  if(1 > n || n > 10){
    return 1;
  }
	for(int i = 1; i <= 10; i++){
		printf("%i\n", n*i);
	}
	return 0;
}