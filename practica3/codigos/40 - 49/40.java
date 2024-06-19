/* Escribir un programa en Processing que dibuje círculos concéntricos en una ventana de 400 × 400 píxeles. Usar
la función ellipse(). La imagen debajo ilustra el resultado aproximado. */
size(400, 400);
for(int i = width; i > 0; i -= 10){
  ellipse(width/2, width/2, i, i);
}
