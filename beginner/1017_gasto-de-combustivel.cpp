#include <iostream>
 
using namespace std;
 
int main() {
 
    int t, vm;
    
    scanf("%d %d", &t, &vm);
    
    float qnt_litros = t * vm / 12.0;
    
    printf("%.3f\n", qnt_litros);
 
    return 0;
}