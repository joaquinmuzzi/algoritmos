/* Escribir un programa en Processing que dibuje 𝑛 círculos de radio aleatorio y de color aleatorio en un lienzo de
400 × 400 píxeles. El radio 𝑟 de cada círculo debe cumplir 10 ≤ 𝑟 ≤ 60. La ubicación de cada círculo en el lienzo
también debe ser aleatoria, sin ninguna restricción */
size(400, 400);
int n = 500;
for(int i = 0; i < n; i++){
 float radius = random(10, 61); //r adio aleatorio entre 10 y 60
 float x = random(width);  // posicion en x aleatoria entre 0 y width
 float y = random(height); // posicion en y aleatoria entre 0 y height
 float r = random(255);    // color random entre 0 y 254;
 float g = random(255);
 float b = random(255);
 fill(r, g, b);            // rellenar el circulo con el color aleatorio
 noStroke();               // elimino los bordes
 circle(x, y, radius);     // dibujar el circulo
}