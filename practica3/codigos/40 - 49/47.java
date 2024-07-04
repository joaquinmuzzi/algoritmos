/* Escribir un programa en Processing como el anterior pero que dibuje un tablero de 𝑛 × 𝑛 casilleros alternando
blanco y negro. Usar un argumento entero para 𝑛. */
size(400, 400);
int n = 14;
int distanciaX = width / n;
int distanciaY = height / n;
int bn = 2;
int bn2 = 2;
for(int i = 1; i <= width; i += distanciaX){
  for(int j = 1; j <= height; j += distanciaY){
    rect(i, j, distanciaX, distanciaY);
    if(bn2 % 2 == 0){
     fill(255); 
    }else{
     fill(0); 
    }
    bn2++;
  }
  if(bn % 2 == 0){
   fill(0); 
  }else{
   fill(255); 
  }
  rect(i, 0, distanciaX, distanciaY);
  bn++;
  bn2++;
}