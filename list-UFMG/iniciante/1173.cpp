#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int arr[10];
    arr[0] = n;
    cout << "N[0] = " << n << endl;

    for(int i = 1; i < 10; i++){
        arr[i] = arr[i-1] * 2;
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
}

int main(){
    solve();
    return 0;
}


/*
n = 1

arr[0] = 1
arr[1] = 2
arr[2] = 4
arr[3] = 8

*/