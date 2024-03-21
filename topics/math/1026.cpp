#include <iostream>
 
using namespace std;
 
int main() {
 
    long int a, b;
    
    while(cin >> a >> b){
        long int soma = a ^ b;
        cout << soma << endl;
    }
 
    return 0;
}