/* Implementar un programa que acepta un argumento entero 𝑛 ≥ 2 e imprime todos los
números 𝑥 ∈ ℕ tal que 𝑥 es par hasta 𝑛 inclusive. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  if(n < 2){
    printf("porfavor ingrese un entero mayor a 1");
    return 1; 
  }
  for (int i = 2; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%i\n", i);
    }

  }
  return 0;
}
