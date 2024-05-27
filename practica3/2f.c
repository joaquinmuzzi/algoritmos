/* Un programa acepta tres argumentos, medio de pago (un char que puede ser 'e', 'd', 't' o 'c'), precio
y cantidad. Calcular e imprimir el monto total a pagar. Si es en efectivo aplicar un 15% de descuento, por
transferencia un 10%. Con tarjeta de crédito recargar un 5% y no hacer nada con tarjeta de débito.*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  char mediopago = argv[1][0];
  int prec       = atoi(argv[2]);
  int cant       = atoi(argv[3]);
  double total = prec * cant;
 
  if (mediopago == 'e') {
    total *= 0.85;
  }
  else if (mediopago == 't'){
    total *= 0.90;
  }
  else if (mediopago == 'c'){
    total *= 0.95;
  }
  printf("En total te sale %.2f\n", total);
  return 0;
}
