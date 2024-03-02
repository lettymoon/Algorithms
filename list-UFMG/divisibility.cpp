/*
Divisibility Problem - Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a=0, b=0;

    for(int i=0; i < n; i++){
        cin >> a >> b;

        if(a%b == 0){
            cout << "0" << endl;
        } 
        else{
            cout << b - (a % b) << endl;
        }
    }

    return 0;
}