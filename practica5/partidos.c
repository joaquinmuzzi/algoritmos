#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char equipo[17];
	int jugados = 0;
	int ganados = 0;
	int empatados = 0;
	int perdidos = 0;
	FILE *fp = fopen("partidos.txt", "r");

	for (int i = 0; i < 8; i++) {
		char linea[100];
		fgets(linea, 100, fp);
		for (int j = 0; linea[j] != 0; j++) {
			char c = linea[j];
			if (c == ',') {
				break;
			}
			printf("%c", c);
		}
		printf("\n");
	}

	return 0;
}

