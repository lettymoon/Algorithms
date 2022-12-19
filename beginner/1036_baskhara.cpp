#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double delta = pow(b, 2) - 4*a*c;
    
    if(delta >= 0 && a != 0){
        double raizdelta = sqrt(delta);
        double r1 = (-b + raizdelta) / (2*a);
        double r2 = (-b - raizdelta) / (2*a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }else{
        printf("Impossivel calcular\n");
    }
 
    return 0;
}