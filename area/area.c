#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double anillo(int D, int d){
  double area_ext = M_PI * (d * 0.5) * (d * 0.5);
  double area_int = M_PI * (D * 0.5) * (D * 0.5);
  return area_ext - area_int;
}

double area(char fig, int a, int b){
  return fig == 't' ? a * b / 2 : ( fig == 'r' ? a * b :
        (fig == 'a' ? anillo(a, b) : ' '));

}

int main(int argc, char *argv[]){
  printf("%f\n", area(argv[1][0], atoi(argv[1]), atoi(argv[2])));
  return 0;
}
