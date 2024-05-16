double cuadraticFunc(double a, double b, double c){
    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    return "Primera raiz: %f\n Segunda raiz: %f\n", x1, x2;
}