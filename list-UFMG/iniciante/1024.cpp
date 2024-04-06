#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    getline(cin, str);

    // somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
            ch += 3;
            str[i] = ch;
        }
    }

    // inverter a string

    string strInvertida;
    int j = str.length() - 1;
    for(int i = 0; i < str.length(); i++){
        strInvertida += str[j];
        j--;
    }

    // todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda

    int meio_str;
    meio_str = (strInvertida.length() / 2);

    for(int i = meio_str; i < str.length(); i++){
        char ch = strInvertida[i];
        ch -= 1;
        strInvertida[i] = ch;
    }

    cout << strInvertida << endl;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--)
        solve();
    return 0;
}