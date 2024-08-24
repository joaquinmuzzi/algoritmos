#include <stdio.h>

// MI SOLUCIÓN (19 LÍNEAS)
int comparar_dinos(char *d, char *e) {
	int a = 0;
	int b = 0;
	int i = 0;
	while (d[i] != 0 && e[i] != 0) {
		a += d[i];
		b += e[i];
		if (a == b) {
			i++;
			continue;
		}
		if (a > b) return 1;
		if (b > a) return -1;
		i++;		
	}
	if (a > b) return 1;
	if (b > a) return -1;
	return 0;	
}

// LA SOLUCIÓN DEL PROFE (5 LÍNEAS)
int comparar_dinos_profe(char *d, char *e) {
	int i = 0;
	while (d[i] != 0 && (d[i] == e[i])) i++;
	return d[i] - e[i];
}

int main(void) {

	int a = comparar_dinos("dinosaurio", "dinosauria");
	int b = comparar_dinos("dinosaurio", "dinosaurio");
	int c = comparar_dinos("dinosauria", "dinosaurio");

	printf("%d\n%d\n%d\n\n", a, b, c);

	a = comparar_dinos_profe("dinosaurio", "dinosauria");
	b = comparar_dinos_profe("dinosaurio", "dinosaurio");
	c = comparar_dinos_profe("dinosauria", "dinosaurio");

	printf("%d\n%d\n%d\n", a, b, c);

	return 0;
}