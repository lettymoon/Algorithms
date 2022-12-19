#include <iostream>
 
using namespace std;
 
int main() {
 
    int i = 0, n = 0;
    scanf("%d", &n);
    
    for(i = 1; i <=n; i++){
        int q = i * i;
        int c = i * i * i;
        printf("%d %d %d\n", i,  q, c);
    }
 
    return 0;
}