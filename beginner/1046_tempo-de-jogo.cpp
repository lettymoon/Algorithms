#include <iostream>
 
using namespace std;
 
int main() {
 
    int i, f;
    scanf("%d %d", &i, &f);

    int d = 0;
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