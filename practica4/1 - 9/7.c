/* Escribir un programa similar al anterior pero que invierta un array con los primeros 20 números pares. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int array[20];
  int par = 2;
  for (int i = 0; i < 20; i++) {
    array[i] = par;
    par += 2;
  }
  
  for (int i = 0; i < 10; i++){
    int t = array[i];
    array[i] = array[20-i-1];
    array[20-i-1] = t;
  }
  for (int i = 0; i < 20; i++){
    printf("%d\n", array[i]);
  }
  
  return 0;
}
