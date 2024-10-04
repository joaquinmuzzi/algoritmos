/* Escribir un programa en C que reciba como argumento el nombre de un archivo de texto que contiene un número
arbitrario de líneas. Cada línea puede contener letras del abecedario, tanto mayúsculas como minísculas. Cada
vez que en una línea haya una secuencia con dos o más letras iguales reemplazar la secuencia por la letra y
el número de veces que aparece. Por ejemplo si una línea es AAaaaabcd reemplazarla por A2a4bcd. Enviar el
resultado de este proceso a salida estándar. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *fp = fopen(argv[1], "r");

  return 0;
}
