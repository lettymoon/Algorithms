/*
Dijkstra - Beecrowd
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
    string joia; set<string>s;

    while(cin >> joia){
        s.insert(joia);
    }
    cout << s.size() << endl;
}

int main(){
    solve();
    return 0;
}
