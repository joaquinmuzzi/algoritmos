/* Escribir un programa que declare el array de enteros 1, 2, 3, 4, 5, 6 e invierta el orden del mismo. Luego imprimirlo. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int array[6] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 3; i++){
    int t = array[i];
    array[i] = array[6-i-1];
    array[6-i-1] = t;
  }
  for (int i = 0; i < 6; i++){
    printf("%d\n", array[i]);
  }
  
  return 0;
}
