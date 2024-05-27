#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);

  double  D = (b*b) - (4*a*c);
  double x1 = (-b-sqrt(D))/(2*a);
  double x2 = (-b+sqrt(D))/(2*a);
  if(D > 0){
    printf("Las raices son: %f y %f", x1, x2);
  }else if(D < 0){
    printf("No existe solución en los números reales");
  }else{
    printf("La raiz es: 0");
  }
  return 0;
}
