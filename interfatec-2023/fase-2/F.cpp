#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    bool odd = true;
    long long x; cin >> x;

    if (x == 1) odd = false;

    for(int i = 1; i < n; i++){
        cin >> x;
        if (x == 1 && odd) odd = true;
        if (x == 1 && !odd) odd = false;
        if (x > 1 && odd) odd = false;
        if (x > 1 && !odd) odd = true;
    }
    cout << (odd ? "impar" : "par") << endl;
}

int main() {
    solve();
    return 0;
}
