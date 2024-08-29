/* Escribir un programa en C que reciba dos argumentos enteros 𝑎 y 𝑏. El programa lee por entrada estándar un
número arbitrario de enteros e imprime los que están entre 𝑎 y 𝑏, es decir en el intervalo [𝑎, 𝑏]. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int n = rand() % 10;
	for (size_t i = 0; i < n; i++) {
		int n = 0;
		scanf("%d", &n);
		if (n < b && n > a) {
			printf("%i ", n);
		}
	}
	return 0;
}

