/*
Botas Trocadas - OBI 2017 Fase 1
*/

#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve(){
    int t; cin >> t;
    vector<pair<int, int>> botas(61, {0,0});

    while(t--){
        int m; char l;
        cin >> m >> l;
        if(l == 'E')botas[m].f++;
        else botas[m].s++;
    }
    
    int res=0;
    for(int i=0; i<botas.size(); i++) res+=min(botas[i].f, botas[i].s);

    cout << res << endl;


}


int main(){
    solve();
    return 0;
}