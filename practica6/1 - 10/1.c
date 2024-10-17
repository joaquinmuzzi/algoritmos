/* Escribir una función void mas_dos(int x) que reciba una variable 𝑥 y le sume dos. Escribir una función
void mas_dos(int a[], int n) que haga lo mismo pero con cada elemento del array a[]. ¿Qué diferencias
encuentran entre ambas funciones? */

#include <stdio.h>
#include <stdlib.h>

void mas_dos(int a[], int n) {
	a[n-1] += 2;
	printf("el elemento ahora vale %d\n", a[n]);
	if(n > 0){
		mas_dos(a, n-1);
	}
}

int main(void) {
	int n = 10;
	int a[10];
	for (int i = 0; i < n; i++) {
		a[i] = i;
		printf
	}
	
	mas_dos(a, n);
	return 0;
}