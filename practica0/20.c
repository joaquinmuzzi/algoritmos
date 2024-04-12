/* Escribir un programa en C que acepte tres argumentos por línea de comandos e imprima un saludo para los tres
nombres ingresados al revés de como fueron ingresados. Por ejemplo: */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%s, %s, %s", argv[3], argv[2], argv[1]);
    return 0;
}
