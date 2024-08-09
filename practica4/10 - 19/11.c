/* Escribir un programa que calcule el producto punto entre dos vectores de dimensión 𝑁 y valores reales. Siendo
𝑁 una constante conocida en tiempo de compilación al igual que los componentes de los vectores. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 2

int main() {
  srand(time(NULL));
  int vector1[N];
  int vector2[N];
  int producto = 0;
  for (int i = 0; i < N; i++) {
    vector1[i] = rand() % 100;
    vector2[i] = rand() % 100;
    producto += vector1[i] * vector2[i];
  }
  printf("El producto entre (%i, %i) y (%i, %i) es ", vector1[0], vector1[1], vector2[0], vector2[1]);
  printf("%d\n", producto);
  return 0;
}