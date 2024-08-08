<<<<<<< HEAD
/* Escribir un programa que declare un array de tipo int que almacene los primeros diez números naturales. Imprimir el array un elemento por línea. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  for (int i = 0; i < 10; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}
=======
/* 1. Escribir un programa que declare un array de tipo int que almacene los primeros diez números naturales. Imprimir el array un elemento por línea.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for(int i = 0; i < 10; i++){
		printf("%d\n", array[i]);
	}
	return 0;
}
>>>>>>> 42a9d0fe520a71e8469ec4164b76ce2a6f8f3503
