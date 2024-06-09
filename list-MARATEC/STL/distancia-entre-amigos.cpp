#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int l = 0;
    int r = n - 1;
    int maxDist = INT_MIN;
    while(l < r){
        maxDist = max(maxDist, v[l] + v[r] + r - l);
        if (v[l] < v[r]){
            l++;
        }else if (v[l] > v[r]){
            r--;
        }else{
            l++;
        }
    }
    cout << maxDist << endl;
}

int main() {

    int t = 1; //cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}