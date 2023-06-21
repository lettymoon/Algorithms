#include <iostream>
 
using namespace std;
 
int main() {
 
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    int media = ((a*2) + (b*3) + (c*5))/10;
    
    printf("MEDIA = %.1f\n", media);
 
    return 0;
}