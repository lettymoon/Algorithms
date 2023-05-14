/*Entrada:
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da 
entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.

Saída:
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  
  while (t--) {
    int n = 0;
    cin >> n;
    int soma = 0;
    
    for(int i = 1; i <= n; i++){
      if(n % i == 0)
        soma++;
    }
  if(soma > 2)
    cout << n << " nao eh primo" << endl;
  else
    cout << n << " eh primo" << endl;
  }
  
  return 0;
}