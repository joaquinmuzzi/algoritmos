/* Escribir una función recursiva en C void hanoi(int n, int start, int end) que imprima la secuencia de pasos para mover 𝑛 discos del poste start al poste end (los tres postes del juego están numerados del 1 al 3) en el juego de ingenio conocido como “Las torres de Hanoi”. */

#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int inicio, int apoyo, int final) {
  if(n == 1) {
    printf("%s a %s", inicio, apoyo, final);
    return 0;
  }
  hanoi(n - 1, )

  
}

int main(int argc, char *argv[]) {
  hanoi(3, 1, 3);
  return 0;
}
