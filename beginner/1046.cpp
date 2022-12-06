#include <iostream>
 
using namespace std;
 
int main() {
 
    int i = 0, f = 0, d = 0;
    scanf("%d %d", &i, &f);
    
    if(i < f){
        d = f - i;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }else{
        f = f + 24;
        d = f - i;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
 
    return 0;
}