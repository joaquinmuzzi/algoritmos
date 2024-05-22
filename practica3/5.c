#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  if(a == b && b == c){
    printf("Iguales\n");
  }else {
    printf("No igualmente\n");
  }
  return 0;
}
