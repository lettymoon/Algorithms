#include <iostream>
 
using namespace std;

int main() {
 
    int i = 0, n = 0, maior = 0, pos = 0;
    
    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n > maior ){
            maior = n;
            pos = i;
        }
    } 
    
    printf("%d\n%d\n", maior, pos);
    
    return 0;
}