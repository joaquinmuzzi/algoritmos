/* Escribir un programa en Processing que dibuje una espiral “cuadrada” como la que se ilustra. Usar la función
line(). */

size(400, 400);
int centroHorizontal = width/2;
int centroVertical = height/2;
for(int i = 5; i < width/2; i += 10){
  line(centroHorizontal-i,centroVertical-i,centroHorizontal+i,centroVertical-i);
  line(centroHorizontal+i,centroVertical-i,centroHorizontal+i,centroVertical+i);
}
for(int j = 10; j < width/2; j += 10){
  line(centroHorizontal+j-5,centroVertical+j-5,centroHorizontal-j-5,centroVertical+j-5);
  line(centroHorizontal-j-5,centroVertical+j-5,centroHorizontal-j-5,centroVertical-j-5);
}