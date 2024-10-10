#include <stdio.h>
#include <stdlib.h>
char *matriz[3][3];
int x, y;

void imprimir_matriz() {
  printf("x0\tx1\tx2\n");
  for(int i = 0; i < 3; i++){
    printf("\n");
    for(int w = 0; w < 3; w++ ){
      printf("%s\t", matriz[i][w]);
    }
    printf("y%d\n", i);
  }
}

void pedir() {
  imprimir_matriz();
  scanf("%d %d", &x, &y);
}

int reintentar(void) {
  printf("Jugar de vuelta?\n1. Si\n2. No\n");
  int r;
  scanf("%d", &r);
  return r == 1;
}

void crear_matriz(){
  for(int i = 0; i < 3; i++){
    for(int w = 0; w < 3; w++ ){
      matriz[i][w] = "[ ]";
    }
  }
}



int main(void){
  system("cls");
  printf("Elige una posicion escribiendo \"x y\" siendo x la columna, e y la fila\n\n");
  crear_matriz();
  for(int i = 0; i < 9; i++){
    pedir(x, y);

    while (matriz[y][x] != "[ ]") {
      system("cls");
      printf("Ese lugar ya esta tomado, vuelve a elegir\n\n");
      pedir(x, y);
    }
    matriz[y][x] = i % 2 == 0 ? "[X]" : "[O]";
    system("cls");
    imprimir_matriz();

    for(int i = 0; i < 3; i++) {
      if(matriz[i][0] == "[X]" && matriz[i][1] == "[X]" && matriz[i][2] == "[X]" || matriz[0][i] == "[X]" && matriz[1][i] == "[X]" && matriz[2][i] == "[X]" || matriz[0][0] == "[X]" && matriz[1][1] == "[X]" && matriz[2][2] == "[X]" || matriz[0][2] == "[X]" && matriz[1][1] == "[X]" && matriz[2][0] == "[X]"){
        printf("\nHa ganado el jugador X\n\n");
        if(reintentar()) main();
        return 0;
      }
      else if(matriz[i][0] == "[O]" && matriz[i][1] == "[O]" && matriz[i][2] == "[O]" || matriz[0][i] == "[O]" && matriz[1][i] == "[O]" && matriz[2][i] == "[O]" || matriz[0][0] == "[O]" && matriz[1][1] == "[O]" && matriz[2][2] == "[O]" || matriz[0][2] == "[O]" && matriz[1][1] == "[O]" && matriz[2][0] == "[O]"){
        printf("\nHa ganado el jugador O\n\n");
        if(reintentar()) main();
        return 0;
      }
    }
    system("cls");

  }
  printf("\nEmpate\n");
  if(reintentar()) main();
  return 0;
}