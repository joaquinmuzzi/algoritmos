/*Se quiere calcular el área debajo de la parábola delimitada por la función 𝑓(𝑥) = −4𝑥2 + 12𝑥 y el eje 𝑥 en el
intervalo [0, 3].*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  double A = 0.0;
  double b = 3.0 / n;
  double h;
  double x = 0.0;
  while(x <= 3.0){
    h = ((-4*(x*x)))+(12*(x));  
    A += h*b;
    x += b;
  }
  printf("%.10f\n", A);
  return 0;
}
