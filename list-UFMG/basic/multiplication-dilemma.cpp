/*
Multiplication Dilemma - Codeforces
*/

#include <bits/stdc++.h>
using namespace std;

int is_special_number(int n)
{
    return (n > 0 && n < 10) || (n % 10 == 0 && is_special_number(n / 10)) ;
}

int main(void)
{
    int n, a, b, r;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a << " x " << x << " + " << a << " x " << y;
    }




    
    return 0;
}

/*

A x b

A x (C + D)
A x C + A x D



a x b


c x d + z x f

27 x 20

30 x 20 - 3 x 20

(30 - 3) x 20


121

122
1334331


27 x 25
(30 - 3) x 25

30 x 25 - 3 x 25

(30 -3) x (20 - 5)

30 x 20 - 5 x 30 - 3 x 20 + 3 x 5

30 x 20 - 5 x 30 - 60 + 3 x 5


*/