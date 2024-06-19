/* Escribir un programa en Processing que dibuje 𝑛 círculos de radio aleatorio y de color aleatorio en un lienzo de
400 × 400 píxeles. El radio 𝑟 de cada círculo debe cumplir 10 ≤ 𝑟 ≤ 60. La ubicación de cada círculo en el lienzo
también debe ser aleatoria, sin ninguna restricción */
size(1080, 720);
int n = 500000;
for(int i = 0; i < n; i++){
 float r = random(10, 61); //r adio aleatorio entre 10 y 60
 float x = random(width);  // posicion en x aleatoria entre 0 y width
 float y = random(height); // posicion en y aleatoria entre 0 y height
 float c = random(255);    // color random entre 0 y 254;
 fill(c);                  // rellenar el circulo con el color aleatorio
 circle(x, y, r);          // dibujar el circulo
}