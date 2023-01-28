#include <iostream>
 
using namespace std;

int main() {
 
    int n = 0, maior = 0, pos = 0;
    
    for(int i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n > maior ){
            maior = n;
            pos = i;
        }
    } 
    
    printf("%d\n%d\n", maior, pos);
    
    return 0;
}