/* Escribir un programa en C que “recorte” los llamados whitespace characters. Los carácteres que se consideran
espacio en blanco son '\n' (nueva línea), espacio y '\t' (tabulación). Hay otros pero son más raros de encontrar.
Con recortar nos referimos a eliminar el espacio en blanco y copiar la entrada ya “recortada” a stdout. */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  FILE *fp = argv[1][0] == '-' ? stdin : fopen(argv[1], "r");
  int cosa;
  while ((cosa = fgetc(fp)) != EOF){
    if(cosa != '\n' && cosa != '\t' && cosa != ' ')
      putchar(cosa);
  }
  return 0;
}