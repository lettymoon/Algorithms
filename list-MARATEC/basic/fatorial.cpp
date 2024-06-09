// Fatorial - Neps Academy

#include <bits/stdc++.h>
using namespace std;

int fatorial(int n){
    if(n == 0) return 1;

    int fat = 1;
    for(int i = 1; i < n+1; i++) fat *= i;

    return fat;
}

int main (void){
    int n; cin >> n;

    cout << fatorial(n) << endl;
    return 0;
}