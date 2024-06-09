/* Interfatecs 2023
J - A Cifra do Palíndromo Perdido
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int start = 0; 
    int end = str.length() - 1;

    while(start < end){
        if(str[start] != str[end])
            return false;
        else{
            start++;
            end--;
        }
    }
    return true;
}

string sanitizeInput(string str) {
    string sanitized = "";
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]))
            sanitized += tolower(str[i]);
    }
    return sanitized;
}

int main(){

    string str; getline(cin, str);
    string sanitizedInput = sanitizeInput(str);

    if(isPalindrome(sanitizedInput))
        cout << "Parabens, voce encontrou o Palindromo Perdido!" << endl;
    else
        cout << "A busca continua, o Palindromo Perdido ainda nao foi encontrado." << endl;          
      
    return 0;
}