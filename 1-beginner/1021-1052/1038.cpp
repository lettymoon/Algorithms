#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    cout << fixed << setprecision(2);
    
    int i, q;
    cin >> i >> q;
    
    if(i == 1){
        cout << "Total: R$ " << (4.0*q) << "\n";
    }else if (i == 2){
        cout << "Total: R$ " << (4.5*q) << "\n";
    }else if (i == 3){
        cout << "Total: R$ " << (5.0*q) << "\n";
    }else if (i == 4){
        cout << "Total: R$ " << (2.0*q) << "\n";
    }else if (i == 5){
        cout << "Total: R$ " << (1.5*q) << "\n";
    }
 
    return 0;
}