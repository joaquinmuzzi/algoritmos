/* Escribir un programa en C que cuente la cantidad de líneas en stdin */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char linea;
	int i = -1;
	do{
		scanf("%c", &linea);    
		i++;
	} while (linea == '\n');
	printf("cantidad de saltos de linea: %i", i);
}
