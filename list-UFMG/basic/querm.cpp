/*
QUERM - spoj
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int t){
    vector<int> arr(t);

    for(int i=0; i < t; i++){
        cin >> arr[i];
    }

    for(int i=0; i < t; i++){
        if(arr[i] == i+1){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int t, i=1;
    while(cin >> t && t != 0){
        cout << "Teste " << i << endl;
        cout << solve(t) << endl << endl;
        i++;
    }

    return 0;
}