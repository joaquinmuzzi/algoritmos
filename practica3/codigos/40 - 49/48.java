/* Escribir un programa en Processing que acepte un argumento entero 𝑛 y dibuje una grilla de 𝑛 × 𝑛 casilleros en
un lienzo de 400 × 400 píxeles. */
size(400, 400);
int n = 5;
// Tomo la distancia entre cada línea
int distanciaX = width / n;
int distanciaY = height / n;
// Dibujo líneas
for(int i = distanciaX; i < width; i += distanciaX){
  line(i, 0, i, height);
  line(0, i, width, i);
}