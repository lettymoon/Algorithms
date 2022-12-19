#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double a, b, c;
    double pi = 3.14159;
    double TrianguloR, Circulo, Trapezio, Quadrado, Retangulo;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    TrianguloR = a * c / 2;
    Circulo = pi * pow(c, 2);
    Trapezio = (a + b) * c / 2;
    Quadrado = pow(b, 2);
    Retangulo = a * b;
    
    printf("TRIANGULO: %.3lf\n", TrianguloR);
    printf("CIRCULO: %.3lf\n", Circulo);
    printf("TRAPEZIO: %.3lf\n", Trapezio);
    printf("QUADRADO: %.3lf\n", Quadrado);
    printf("RETANGULO: %.3lf\n", Retangulo);
    
 
    return 0;
}