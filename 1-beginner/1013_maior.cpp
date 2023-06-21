#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);
    
    int maior = (a+b+abs(a-b))/2;
    
    if (maior > c)
        printf("%d eh o maior\n", maior);
    else 
        printf("%d eh o maior\n", c);
 
    return 0;
}