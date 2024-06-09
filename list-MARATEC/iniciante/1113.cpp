#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y; cin >> x >> y;

    while(x != y){
        if(x > y)
            cout << "Decrescente" << endl;
        else
            cout << "Crescente" << endl;
        cin >> x >> y;
    }
}


int main(){

    solve();
    return 0;
}