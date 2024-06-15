/* Un programa que imprime las raíces de una función cuadrática. Primero se debe calcular el valor del discriminante 𝐷 = 𝑏2 − 4𝑎𝑐. Si 𝐷 > 0 entonces se imprimen dos raíces. Si 𝐷 = 0 entonces la raíz es doble y se
imprime una sóla vez. En el caso de que 𝐷 < 0 se informa que no existe solución en los números reales. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){
    printf("%d", random());
    return 0;
}

int random(){
    srand(time(NULL));
    int rdm = (rand() % 8) + 1;
    return rdm > 5 ? 6 : rdm;
}
