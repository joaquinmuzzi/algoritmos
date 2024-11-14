/* Escribir una función recursiva en C que devuelva la suma de todos los elementos en un array #include <stdio.h> 
#include<stdio.h>
#include<stdlib.h>


int sumaArray(int n, int array[]) {
    if (n == 0) return 0;
    return array[n - 1] + sumaArray(n - 1, array);
}

int main() {
    int n = 4;
    int array[4] = {3, 4, 5, 6};
    printf("%d\n", sumaArray(n, array));
    return 0;
}
 */

#include<stdio.h>
#include<stdio.h>

int imprimirArray(int n, char *array[n], int b){
  if(n == 0) return 0;
  printf("%s", array[b]);
  return imprimirArray(--n, array, b+1);
}

int main(){
  int n = 3;
  int b = 0;
  char *array[3] = {"hola", " me", " voy "};
  imprimirArray(n, array, b);
}
