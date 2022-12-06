/*Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos 
cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.
*/

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int n = 0, i =0;
    int soma = 0;
    
    while(true){
        cin >> n;
        if(n < 0){
            break;}
        soma = soma + n;
        i++;
    }
    
    float media = (float)soma/(float)i;
    cout << fixed << setprecision(2);
    cout << media << endl;
 
    return 0;
}