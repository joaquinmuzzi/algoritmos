/* Escribir un programa en C que funcione como el comando cp de Unix. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *nombreArchivo1 = argv[1];
  char *nombreArchivo2 = argv[2];
  FILE *archivo1 = *fopen(nombreArchivo1, "r");
  FILE *archivo2 = *fopen(nombreArchivo2, "w");
  size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
  size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
  // Esto no fue explicado en clase...
  return 0;
}