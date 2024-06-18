/* En un concurso televisivo el conductor le presenta al participante tres puertas cerradas. Detrás de una de ellas
hay un autoi. En las otras dos hay cabras. El concursante debe elegir una puerta. Después de haber elegido una
puerta el conductor abre una de las dos puertas restantes descubriendo una cabra y le ofrece al concursante la
posibilidad de cambiar de puerta. ¿Debería cambiar de puerta o mantener su decisión original? ¿Da lo mismo?
Escribir un programa que simule jugar al juego 𝑛 veces. Cambiando y sin cambiar de puerta. Imprimir la probabilidad de ganar el juego para cada una de las dos estrategias: siempre cambiar de puerta o siempre mantener
su primera elección. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
  srand(time(NULL));
  int intentos, puerta_correcta, puerta_revelada, ganadas_cambiando, ganadas_sin_cambiar, eleccion_inicial, eleccion_final;
  double probabilidad_cambiando, probabilidad_sin_cambiar;
  intentos = atoi(argv[1]);
  for (int i = 0; i < intentos; i++) {
    puerta_correcta = rand() % 3;
    eleccion_inicial = rand() % 3;
    puerta_revelada = rand() % 3;
    
    //si su primera elección fue acertada
    if(eleccion_inicial == puerta_correcta){
      ganadas_sin_cambiar++;
    }
  
    //revelar la puerta
    while(puerta_revelada == eleccion_inicial || puerta_revelada == puerta_correcta){
      puerta_revelada = rand() % 3;
    }

    // cambiar de decision
    for(int j = 0; j < 3; j++){
      if (j != eleccion_inicial && j != puerta_revelada) {
        eleccion_final = j;
        break;
      }
    }
    if(eleccion_final == puerta_correcta){
      ganadas_cambiando++;
    }
  }
  probabilidad_cambiando = ((double)ganadas_cambiando / intentos) * 100;
  probabilidad_sin_cambiar = ((double)ganadas_sin_cambiar / intentos) * 100;

  printf("la probabilidad cambiando es de: %.2f\nla probabilidad sin cambiar es de: %.2f\n\n", probabilidad_cambiando, probabilidad_sin_cambiar);
  return 0;
}
