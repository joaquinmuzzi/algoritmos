/* Escribir un programa que simule lo que se conoce como “caminos aleatorios”. Usar una matriz de números
enteros de 15 × 15 inicialmente llena de ceros. Poner un uno en el centro de la matriz e ir llenando con unos
representando los pasos del “caminante”. La caminata termina cuando se sale de la matriz original. El caminante
puede dar un paso a la vez a la izquierda, derecha, arriba o abajo. Pero no puede volver sobre sus pasos. Imprimir
la matriz que representa la caminata al terminar. */

#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int caminata[15][15];
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++){
     caminata[i][j] = 0; 
    }
  }

  while (posicion <) {
    int paso = rand() % 4;
    if (paso == 0) {
      caminata[i]
    }
    
  }
  
  
  return 0;
}
