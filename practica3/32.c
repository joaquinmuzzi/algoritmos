#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  double n = 1.0;
  for (int i = 1; i < n; i++){
    n = 1.0/i;
    printf("%f\n", n);
  }   
  return 0;
}
