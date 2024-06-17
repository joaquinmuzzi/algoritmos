//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
  int num = atoi(argv[1]);
    // bucle que se ejecuta mientras i sea menor a num 
    for (int i = 2; i <= num; i++){
      // si es primo, es un divisor de num y tambien es menor a num lo imprime
      if (is_prime(i)) {
        while(num % i == 0){
          printf("%i\n", i);
          num /= i;
        }
      }
    }
  return 0;
}
