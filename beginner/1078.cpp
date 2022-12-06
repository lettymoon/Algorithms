#include <iostream>
 
using namespace std;
 
int main() {
 
    int n = 0, i = 0;
    scanf("%d", &n);
    
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, n, n*i);
    }
 
    return 0;
}