#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a, v; cin >> a >> v;
    
    vector<pair<int, int>> segmentos(v, {0, 0});
    while(v--){
        int x, y; cin >> x >> y;
        if(x < y) swap(x, y);
        
        bool existe = false;
        for (const auto& seg : segmentos) {
            if (seg.first == x && seg.second == y) {
                existe = true;
                break;
            }
        }
        
        if(!existe) segmentos.push_back({x, y});
    }
    int resposta = segmentos.size() * 2;
    cout << resposta << endl;
}

int main(){
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}