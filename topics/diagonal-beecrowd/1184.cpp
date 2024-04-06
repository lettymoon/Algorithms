#include <bits/stdc++.h>
using namespace std;

int main(){
    char c; cin >> c;
    double arr[12][12];
    double sum = 0.0;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i < 12; i++){
        for(int j = 0; j < i; j++){
            sum += arr[i][j];
        }
    }

    if(c == 'M')
        cout << fixed << setprecision(1) << sum/66.0 << endl; 
    else 
        cout << fixed << setprecision(1) << sum << endl;

    return 0;
}