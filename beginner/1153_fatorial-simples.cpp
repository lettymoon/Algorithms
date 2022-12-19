#include <iostream>
 
using namespace std;
 
int main(){
    
    int n;
    cin >> n;
    int res = 1;
    
    if(n < 0){
        cout << 0 << endl;
    }else if(n == 0){
        cout << 1 << endl;
    }else{
        for(int i = 0; i < n; i++){
            res = (n-i) * res;
        }
    }
    
    cout << res << endl;
 
    return 0;
}