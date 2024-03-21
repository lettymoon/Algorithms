/*
Primos - spoj
*/

#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){

    int count = 0;
    for(int i = 1; i <= n; i++){
      if(n % i == 0)
        count++;
    }

    if(count > 2)
        return 0;

    return 1;
}

int main(){
    int n;

    cin >> n;
    if (isPrime(n))
        cout << "sim" << endl;
    else
        cout << "nao" << endl;
}