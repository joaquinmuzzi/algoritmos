#include "stdlib.h"
#include "stdio.h"

int envido(char p1, int v1, char p2, int v2, char p3, int v3){
    // declaro la variable que va a tomar el valor del envido
    int resultado = 0;

    // si ningun palo es igual imprime el menor valor
    if(p1 != p2 && p2 != p3 && p1 != p3){
        resultado += v1 > v2 ? v2 : (v1 > v3 ? v3 : v1);
        return resultado;
    }

    // si algun valor es mayor o igual a 10 lo toma como 0
    v1 = v1 >= 10 ? 0 : v1;
    v2 = v2 >= 10 ? 0 : v2;
    v3 = v3 >= 10 ? 0 : v3;

    // si dos palos son iguales suma sus valores
    if(p1 == p2){
        resultado += v1 + v2;

    }else if(p2 == p3){
        resultado += v2 + v3;

    }else if(p1 == p3){
        resultado += v1 + v3;

    }
    return resultado;
}

int main(int argc, char const *argv[]){
    printf("%i\n", envido((argv[1][0]), atoi(argv[2]), (argv[3][0]), atoi(argv[4]), (argv[5][0]), atoi(argv[6])));
    return 0;
}

// b 7 o 10 c 8 = 7 
// b 7 o 10 b 8 = 15 