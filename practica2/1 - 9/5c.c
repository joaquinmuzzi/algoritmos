/* Una función que devuelva la distancia entre dos puntos 𝑋 e 𝑌 en el plano */

double vector_distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
