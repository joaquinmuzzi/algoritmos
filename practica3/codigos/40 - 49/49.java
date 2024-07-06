/* Escribir un programa en Processing que acepte un argumento entero 𝑛. El programa dibuja los dos ejes del plano
cartesiano marcando 𝑛 divisiones en el eje 𝑥 y en el eje 𝑦 como se ilustra debajo. */
size(400, 400);
int n = 10;
int divisionX = width / n;  // toma el valor en x
int divisionY = height / n; // toma el valor en y
line(0, height/2, width, height/2);
line(width/2, 0, width/2, height);
strokeWeight(4);
for(int i = 1; i < n; i++){
  point(divisionX, height/2);
  point(width/2, divisionY);
  divisionX += width / n;
  divisionY += height / n;
}