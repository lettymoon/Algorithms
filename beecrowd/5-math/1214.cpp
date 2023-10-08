#include <bits/stdc++.h>

using namespace std;

int main() {

    // declarar o número de turmar c
    int c;
    cin >> c;

    // declarar o número de alunos de cada turma e suas notas
    int arr[1005], n;
    float soma = 0;
    float acimaMedia = 0;

    // ler as médias dos alunos
    // calcular a média das médias dos alunos e ver quantos % estão acima da média
    // imprimir o resultado da %
    for(int i = 0; i < c; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> arr[j];
            soma += arr[j];
        }
        soma /= n;
        for(int z = 0; z < n; z++){
            if(arr[z] > soma)
                acimaMedia++;
        }
        cout << fixed << setprecision(3) << 100*acimaMedia/n << "%" << endl;
        soma = 0;
        acimaMedia = 0;
        n = 0;
    }
    

    return 0;
}