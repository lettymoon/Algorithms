/*
Criptografia - Beecrowd 1024
*/

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++){
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            ch += 3;
            str[i] = ch;
        }
    }

    string strInvertida;
    int j = (str.length() - 1);
    for (int i = 0; i < str.length(); i++){
        strInvertida += str[j];
        j--;
    }

    int meioString;
    meioString = (strInvertida.length() / 2);
        
    for(int i = meioString; i < strInvertida.length(); i++){
        char ch = strInvertida[i];
        ch -= 1;
        strInvertida[i] = ch;
    }

    cout << strInvertida << endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        solve();
    }
    return 0;
}