/* Escribir un programa en C que sume todos los números enteros que ingresen por entrada estándar. Finalizar de
leer números al encontrar EOF (emblems of frost). Imprimir la suma. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, sum = 0;
	while (scanf("%d", &n) != EOF) sum += n;
	printf("%d\n", sum);
	return 0;
}