/*
Figurinhas - Beecrowd 1028
Usando Algoritmo de Euclides Recursivamente 
*/

#include <bits/stdc++.h>

using namespace std;


int solve(int a, int b){
    if(b == 0)
        return a;
    else
        return solve(b, a%b);
}

int main(){

    int t; cin >> t;

    while(t--){
        int a, b; cin >> a >> b;
        cout << solve(a, b) << endl;
    }
    
    return 0;
}