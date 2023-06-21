#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double pi = 3.14159;
    double R;

    scanf("%lf", &R);
    
    double volume = (4.0/3) * pi * pow(R,3);
    
    printf("VOLUME = %.3lf\n", volume);
    
 
    return 0;
}