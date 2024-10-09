/* Escribir un programa en C que reciba como argumento el nombre de un archivo de texto y un número 𝑛. Cifrar
los contenidos del archivo usando rotación módulo 𝑛 y escribir el resultado en un nuevo archivo con el nombre
out.txt. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp1 = fopen(argv[1], "r");
	FILE *fp2 = fopen("out.txt", "w");
	int n = atoi(argv[2]);
	char c;

	while ((c = getc(fp1)) != EOF)	{
		if (c == ' ' || c == '\n' || c == '\t') {
			fputc(c, fp2);
			continue;
		}
		c += n;
		fputc(c, fp2);
	}

	fclose(fp1);
  fclose(fp2);
	return 0;
}
