/* Escribir un programa en Processing que dibuje una línea como se ilustra debajo. El proceso debe ser aleatorio.
Comenzando desde la izquierda al medio de la ventana dibujar una línea a 45º hacia abajo de longitud aleatoria.
Luego girar 90º y dibujar una línea hacia arriba también de longitud aleatoria y repetir desde el principio. En el
ejemplo el lienzo es de 600 × 200 píxeles. */
size(600, 400);
int random = round(random(101));
int x1 = 0;
int y1 = height/2;
int x2 = random;
int direccion = -1;
int y2 = y1 + (random*direccion);
for(int i = 0; i <= width; i = x1){
  random = round(random(101));
  line(x1, y1, x2, y2);
  direccion *= -1;
  x1 = x2;
  y1 = y2;
  x2 += random;
  y2 = y1 + (random*direccion);
}