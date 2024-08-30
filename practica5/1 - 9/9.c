/* Mejorar el programa anterior validando lo que ingresa el usuario. En primer lugar si el usuario ingresa un
número 1000 < 𝑛 < 1 pedir que ingrese de nuevo un número válido. En segundo lugar chequear que el usuario
ingrese un número válido, es decir caracteres que sean dígitos y no algo como “abc”. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int random = rand() % 1000 + 1;
	int n = 0;
	int intentos = 0;
	printf("Adivina un numero entre 1 y 1000: ");
  int es_numero = scanf("%d", &n);
  while (1) {
    if ((n < 1) || (n > 1000) || es_numero != 1) {
      printf("otra vez... ");
      es_numero = scanf("%d", &n);
    } else {
      break;
    }
  }
  
	while (n != random) {
		if (n > random) {
			printf("Es menor: ");
			scanf("%d", &n);
		}
		if (n < random) {
			printf("Es mayor: ");
			scanf("%d", &n);
		}
		intentos++;
	}
	printf("tardaste %d intentos, ay mi gordito...", intentos);
	return 0;
}