// Una función que normalize un vector en el plano.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double normalize(int x1, int x2, int y1, int y2){
  return sqrt(x1*x1 + x2*x2 + y1*y1 + y2*y2);
} 

int main(int argc, char *argv[]){
  printf("%.2f\n",normalize(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4])));  
}
