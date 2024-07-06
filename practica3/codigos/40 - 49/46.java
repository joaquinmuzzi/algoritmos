/* Escribir un programa en Processing que dibuje un tablero de ajedrez: 64 casilleros, 8 filas y 8 columnas, alternando negro y blanco. Debe quedar como se ilustra abajo. El tamaño de la imagen debe ser un cuadrado de 400
píxeles de lado. */
size(400, 400);
int x = 0;
int y = 0;
int w = width / 8;
int h = height / 8;
for(int i = 0; i <= 8; i++){
  for(int j = 0; j <= 8; j++){
    fill((j % 2 != i % 2) ? 255 : 0);
    rect(x, y, w, h);
    y += h;
  }
  x += w;
  y = 0;
}