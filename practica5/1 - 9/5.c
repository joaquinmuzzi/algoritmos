/* Escribir un programa en C que cuente la cantidad de caracteres ingresados por entrada estándar */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int n = 0;
	while (scanf("%d", &n) != EOF) n++;
	printf("La cantidad de caracteres que ingresaste es: %d\n", n-1);
	return 0;
}