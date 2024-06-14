#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);

  for (int i = 1; i <= n; i++) {
    printf("%i ", i);
  }
  printf("\n");
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(i == 1){
        printf("* ");
      }else if(i == 2){
        printf("* ");
      }
      else{
        printf(j % i == 0 || i % j == 0 ? "* " : "  ");
      }
    }
    printf("%i\n", i);
  }

}
