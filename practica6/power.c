#include <stdio.h>
#include <stdlib.h>

long long int power(long long int a, int b) {
  if (b == 0) return 1;
  return power(a, b-1) * a;
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%lld", power(a, b));
  return 0;
}