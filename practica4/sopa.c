#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define N 20

int contar_palabra(char *palabra) {
  int i = 0;
  while (palabra[i] != 0) i++;
  return i;
}

void crear_sopa(char sopa[N][N]) {
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      char letra = (rand() % 25) + 'a';
      sopa[i][j] = letra;
    }
  }
}

void imprimir_sopa(char sopa[N][N]){
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      printf("%c ", sopa[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int meter_palabra(char *palabra, char sopa[N][N]) {
  int tamanio = contar_palabra(palabra);
  if (tamanio > N || tamanio < 1)
    return 1;

  int indice_inicialC = N - tamanio - 1; // se empieza a generar de manera que entre en la sopa
  int indice_inicialF = rand() % N;
  int direccion = rand() % 2;
  if (direccion) {
    for (size_t i = 0; i < tamanio; i++) {
      sopa[indice_inicialF][indice_inicialC] = palabra[i];
      indice_inicialC++;
    }
  } else {
    for (size_t i = 0; i < tamanio; i++) {
      sopa[indice_inicialC][indice_inicialF] = palabra[i];
      indice_inicialC++;
    }
  }
  printf("\n\n");
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  char sopa[N][N];  
  char *palabras[5] = {"Gigantspinosaurio", "Alosaurio", "Diplodocus", "Estegosaurio", "Protoceratops"};

  crear_sopa(sopa);
  for (size_t i = 0; i < 5; i++) {
    meter_palabra(palabras[i], sopa);
  }
  imprimir_sopa(sopa);
  
  return 0;
}
