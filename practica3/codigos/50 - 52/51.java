/* Escribir un programa en Processing que acepte un único argumento entero 𝑛, la cantidad de puntas de una
“estrella”. El programa debe dibujar una estrella con 𝑛 puntas siempre y cuando 𝑛 ≥ 4 y 𝑛 sea múltiplo de 4. Si
alguna de esas condiciones no se cumple el programa termina usando la función exit(). Las estrellas se deben
dibujar usando cuadrados con rect() e ir rotándolos. Investigar en la referencia de Processing las funciones
rotate() y translate(). El tamaño de la ventana es de 400 × 400 píxeles. */
size(400, 400);
int n = 21;
int rotacion = 90 / (n/4);
if(n < 4 && (n % 4 != 0)){
  exit();
  print("Hola soy un exit();");
}
translate(width/2, height/2);
for(int i = 4; i <= n; i += 4){
  fill(0);
  rect(-104, -104, 208, 208);
  rotate(radians(rotacion));
}