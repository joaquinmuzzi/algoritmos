/* Escribir una función recursiva en Processing para dibujar un árbol H de orden 𝑛. */
// line(x1, y1, x2, y2)  


void setup() {
  size(400, 400);
  int n = 3;
  arbol(n, width/2, height/2, width/4); 
}

void arbol(int n, float x, float y, float len) {
  if (n == 0) return;

  line(x - len, y, x + len, y);             
  line(x - len, y - len, x - len, y + len); 
  line(x + len, y - len, x + len, y + len); 

  arbol(n - 1, x - len, y - len, len / 2); 
  arbol(n - 1, x + len, y - len, len / 2); 
  arbol(n - 1, x - len, y + len, len / 2); 
  arbol(n - 1, x + len, y + len, len / 2); 
}