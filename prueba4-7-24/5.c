/* Escribir una función en C que calcule y devuelva la suma parcial de los primeros n términos de la serie infinita ∑∞𝑘=1 1/(4^k) */
#include <stdio.h>
#include <stdlib.h>

double power(double x, int n){
	double resultado = x;
	for (int i = 1; i < n; i++){
		resultado *= x;
	}
	return resultado;
}

double suma(int n){
	double denominador = 4.0;
	double resultado = 0;
	for (int k = 1; k <= n; k++){
		denominador = power(denominador, k);
		resultado += 1 / denominador;
		printf("%.10f\n", resultado);
	}
	return resultado;
}
int main(int argc, char *argv[]){
	int x = atoi(argv[1]);
	printf("%.10f", suma(x));
	return 0;
}
