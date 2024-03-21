/*
Divisibility - Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    int a=0, b=0;

    while(t--){
        cin >> a >> b;
        if(a%b == 0){
            cout << "0" << endl;
        }
        else{
            cout << b - (a%b) << endl;
        }    
    }

    return 0;
}