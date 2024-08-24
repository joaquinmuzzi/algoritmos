/* Escribir un programa en C que reciba un argumento entero 𝑛 y acepte 𝑛 enteros por entrada estándar. Al terminar
de leer los números imprimir su suma. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	int sum = 0;
	int num;
	for (int i = 0; i < n; i++) {
		printf("Ingrese el numero %d: ", i+1);
		scanf("%d", &num);
		sum += num;
	}

	printf("La suma es: %d\n", sum);
	return 0;
}