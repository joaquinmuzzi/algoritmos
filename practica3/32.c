/* Un grupo infinito de matemáticos entra a un bar. El primero le pide al cantinero una pinta de cerveza, el segundo
media pinta, el tercero un cuarto de pinta, el cuarto un octavo de pinta y así sucesivamente. El cantinero los
mira, sirve dos pintas y les dice “Arréglense ustedes”.
Escribir un programa que demuestre por qué el cantinero tenía razón al servir dos cervezas. */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  double suma = 0;
  for (int i = 1; (suma - 2.000) < 0.001; i*=2){
    suma += 1.0/i;
    printf("1/%i = %.8f\t(la suma es: %.8f)\n", i, 1.0/i, suma);
  }   
  return 0;
}
