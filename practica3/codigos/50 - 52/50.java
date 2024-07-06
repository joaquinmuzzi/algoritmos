/* Escribir un programa en Processing que acepte cuatro argumentos enteros 𝑎, 𝑏, 𝑐 y 𝑑. La cantidad de habitantes
en cada franja etaria: 0 - 12, 13 - 21, 22 - 60 y 60 en adelante, respectivamente. El programa utiliza los cuatro
datos para dibujar un histograma como se ilustra abajo. */
size(400, 400);
int lado = 50;
int a = 50;
int b = 150;
int c = 300;
int d = 150;
int[] personas = {a, b, c, d};
for(int i = 0; i < 4; i++){
  rect(lado, height, 50, -personas[i]);
  lado += 100;
}