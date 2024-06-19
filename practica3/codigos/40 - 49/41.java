/* Escribir un programa en Processing que dibuje una espiral “cuadrada” como la que se ilustra. Usar la función
line(). */

size(400, 400);
int centroHorizontal = width/2;
int centroVertical = height/2;
for(int i = 0; i < width/2; i += 10){
  line(centroHorizontal-i,centroVertical-i,centroHorizontal+i,centroVertical-i);
  line(centroHorizontal+i,centroVertical-i,centroHorizontal+i,centroVertical+i);
  line(centroHorizontal+i,centroVertical+i,centroHorizontal-i,centroVertical+i);
  line(centroHorizontal-i,centroVertical+i,centroHorizontal-i,centroVertical-i);
}