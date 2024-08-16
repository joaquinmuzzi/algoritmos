#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(void) {
	int numero = 2;
	int tablero[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
				tablero[i][j] = numero; 
				printf("%i\t", tablero[i][j]);
				numero += 2;
		}
		printf("\n\n\n");
	}
  return 0;
}
