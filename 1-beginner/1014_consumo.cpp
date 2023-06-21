#include <iostream>
 
using namespace std;
 
int main() {
 
    float x, y;
    scanf("%f %f", &x, &y);
    
    double consumo_medio = x / y;
    
    printf("%.3lf km/l\n", consumo_medio);
 
    return 0;
}