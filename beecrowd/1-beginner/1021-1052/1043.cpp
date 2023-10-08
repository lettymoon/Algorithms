#include <iostream>
 
using namespace std;
 
int main() {

    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if( a + b > c && a + c > b && b + c > a){
        float p = a + b + c;
        printf("Perimetro = %.1f\n", p);
    }else{
        float at = ((a + b) * c) / 2;
        printf("Area = %.1f\n", at);
    }
 
    return 0;
    
}