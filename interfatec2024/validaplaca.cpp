#include <bits/stdc++.h>
using namespace std;

bool isAntiga(string s){
    if(s.size() < 2) return false;
    if(s.size() > 5) return false;
    if(isdigit(s[0])) return false;
    if(!isdigit(s[1])) return false;

    return true;
}

bool isNumerica(string s){
    if(s.size() > 7) return false;
    for(int i = 0; i < s.size(); i++){
        if(!isdigit(s[i])) return false;
        else continue;
    }

    return true;
}

bool isAA9999(string s){
    if(s.size() != 6) return false;
    if(isdigit(s[0]) || isdigit(s[1])) return false;
    if(!isdigit(s[2]) || !isdigit(s[3]) || !isdigit(s[4]) || !isdigit(s[5])) return false;

    return true;
}

bool isAAA9999(string s){
    if(s.size() != 7) return false;
    if(isdigit(s[0]) || isdigit(s[1]) || isdigit(s[2])) return false;
    if(!isdigit(s[3]) || !isdigit(s[4]) || !isdigit(s[5]) || !isdigit(s[6])) return false;

    return true;
}

bool ismercosul(string s){
    if(s.size() != 7) return false;
    if(isdigit(s[0]) || isdigit(s[1]) || isdigit(s[2])) return false;
    if(!isdigit(s[3])) return false;
    if(isdigit(s[4])) return false;
    if(!isdigit(s[5]) || !isdigit(s[6])) return false;

    return true;
}

int main(){
    string s; cin >> s;
    if (isAntiga(s))
        cout << "Placa muito antiga" << endl;
    else if(isNumerica(s))
        cout << "Placa numerica" << endl;
    else if(isAA9999(s))
        cout << "Plca AA-9999" << endl;
    else if(isAAA9999(s))
        cout << "Plca AAA-9999" << endl;
    else if(ismercosul(s))
        cout << "Plca Mercosul" << endl;
    else
        cout << "Plca invalida" << endl;
    return 0;
}