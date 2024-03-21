/*
Fatorial - Neps Academy

*/

#include <bits/stdc++.h>
using namespace std;

int fat(int n){
    if(n == 0)
        return 1;
    return n*fat(n-1);
}

int main (void){
    int n;

    while(n >= 0){
        cin >> n;
        cout << "Fat = " << fat(n) << endl;
    }

    return 0;
}