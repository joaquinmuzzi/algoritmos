#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  int a = 0;
  int b = 1;
  int t = 0;
  int i = 1;
  while( i <= n) {
   printf("%d\n", a);
   t = a + b;
   a = b;
   b = t;
   i++;  
  }

  //Hola MuzziDev
  return 0;
}
