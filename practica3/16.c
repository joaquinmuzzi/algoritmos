#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(i == 1){
        printf("%i ", j);
      }else{
        printf(i % j == 0 ? "* " : "  ");
      }
    }
    printf("\n");
  }

}
