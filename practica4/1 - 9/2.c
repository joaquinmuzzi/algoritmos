/* Escribir un programa que haga lo mismo que el ejercicio anterior pero para los primeros 𝑛 números naturales.
<<<<<<< HEAD
El usuario ingresa 𝑛 como argumento de línea de comandos. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int array[n];
  for (int i = 0; i < n; i++) {
    array[i] = i + 1;
    printf("%d\n", array[i]);
  }
  return 0;
}
=======
El usuario ingresa 𝑛 como argumento de línea de comandos */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	int array[n];
	for(int i = 0; i < n; i++){
        array[i] = i + 1;
		printf("%d\n", array[i]);
	}
	return 0;
}
>>>>>>> 42a9d0fe520a71e8469ec4164b76ce2a6f8f3503
