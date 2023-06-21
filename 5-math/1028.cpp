#include <bits/stdc++.h>

using namespace std;

//Discrete Math Formula - GDC && LCM Relation
//a*b = gdc(a,b)*lcm(a,b)

//MDC - Menor Divisor Comum
//GCD - Greater Common Divisor
int gcd(int a,int b){
    int resto = 0;
    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

//MMC - Maior multiplo comum
//Least common Multiple
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){

    // declarar a quantidade de caso de teste N
    int t;cin >> t;
    while(t--){
        int f1, f2;
        cin >> f1 >> f2;
        cout << gcd(f1,f2) << endl;
    }

    return 0;
}