/* Escribir un programa en Processing que acepte un argumento entero 𝑛 y divida un lienzo de 400 × 400 píxeles
en 𝑛 × 𝑛 casilleros. En cada casillero dibujar un cuadrado con rect() usando un color aleatorio. */
void setup() {  // setup() runs once
  size(400, 400);
  frameRate(5);
}
void draw(){
  int n = 10;
  int w = width / n;
  int h = height / n;
  for(int x = 0; x < width; x += w){
    for(int y = 0; y < height; y += h){
      rect(x, y, w, h);
      fill(color(random(255), random(255), random(255)));
    }  
  }
}