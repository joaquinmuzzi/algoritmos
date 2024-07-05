// Hay que ver cuanto sale un remis
// vos me decis cuantos kms viajaste
// le programa me dice cuanto gastaste
// de movida son 1000 pesos
// de 0 a 6km son 350 pesos cada 500m
// de 6 a 12 te voy a cobrar 250 pesos cada 500m
// despues de los 12km te cobro 250 pesos por km

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int kms = atoi(argv[1]);
    double total = 1000.0;

    if(kms <= 6){
        total += (kms * 2) * 350;
    }
    if(kms > 6 && kms <= 12){
        total += ((kms - 6) * 2 * 250) + 4200;
    }
    if(kms > 12) {        
        total += ((kms - 12) * 250) + 7200;
    }

    printf("viajaste %d y me debes $%.2f\n", kms, total);
    return 0;
}