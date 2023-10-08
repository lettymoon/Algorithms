#include <iostream>
 
using namespace std;
 
int main() {
 
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    
    while (x != y){
        if(x > y)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
        scanf("%d %d", &x, &y);
    }

    return 0;
}