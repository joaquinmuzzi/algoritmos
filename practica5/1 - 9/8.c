/* Escribir un programa que elija al azar un número entre uno y mil. Pedir al usuario que ingrese un número
intentando adivinar. Indicar si el número correcto es menor o mayor al número ingresado. Darle al usuario un
número limitado de preguntas, cinco por ejemplo. ¿Cuántas preguntas necesita el usuario para poder adivinar
siempre el número? */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int random = rand() % 1000 + 1;
	int n = 0;
	printf("Adivina un numero entre 1 y 1000: ");
	scanf("%d", &n);
	while (n != random) {
		if (n > random) {
			printf("Es menor: ");
			scanf("%d", &n);
		}
		if (n < random) {
			printf("Es mayor: ");
			scanf("%d", &n);
		} 
	}
	printf("que bueno");
	return 0;
}