/* Escribir una función que reciba un argumento de tipo string y busque en un array conocido en tiempo de compilación si el string está en el array.
Devolver el índice del elemento en el array si fue encontrado. De lo contrario devolver -1. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char *palabra = argv[1];
	char *array = "felipe";
	int indice = 0;

	int i = 0;
	while(palabra[i] != 0){
		int j = 0;
		while(array[j] != 0){
			if(palabra[i] == array[j]){
				indice = palabra[i];
			}
			j++;
		}
		i++;
	}
	printf("El indice es: %i", indice);

}