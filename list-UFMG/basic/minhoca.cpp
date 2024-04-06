#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;cin >> n1 >> n2;
    int arr[n1][n2];
    int sumTempC = 0;
    int sumTempL = 0;
    
    // input do vetor
    for(int i=0; i < n1; i++){
        for(int j=0; j < n2; j++)
            cin >> arr[i][j];
    }

    // soma das linhas das matrizes
    for(int i=0; i < n1; i++){
        int sumL = 0;
        for(int j=0; j < n2; j++){
            sumL += arr[i][j];
        }
        if(sumL > sumTempL)
            sumTempL = sumL;
        sumL = 0;
    }

    // soma das colunas da matriz
    for(int j=0; j < n2; j++){
        int sumC = 0;
        for(int i=0; i < n1; i++){
            sumC += arr[i][j];
        }
        if(sumC > sumTempC)
            sumTempC = sumC;
        sumC = 0;
    }

    // imprimir a maior coluna ou linha
    if(sumTempC > sumTempL)
        cout << sumTempC << endl;
    else
        cout << sumTempL << endl;
    return 0;
}