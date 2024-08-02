/* Algunas palabras son muy largas. Por ejemplo internationalization o localization. Escribir un programa que
acepte una palabra como argumento en la línea de comandos. Si la longitud de la palabra es menor o igual a 10
imprimir la palabra tal como fue ingresada. Si tiene más de 10 caracteres imprimir únicamente la primer letra
seguida de un entero 𝑛 seguido de la última letra, siendo 𝑛 la cantidad de letras entre la primera y la última. Por
ejemplo para localization el programa imprime l10n y para internationalization imprime i18n. Pero para word
imprime word. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *palabra = argv[1];
    int i = 0;
    while (palabra[i] != 0) i++;
    if (i <= 10){
        printf("%s\n", palabra);
    }else{
        printf("%c%d%c", palabra[0], i-2, palabra[i-1]);
    }
    return 0;
}
