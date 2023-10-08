/*Entrada:
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 20), indicando o número de casos de teste da 
entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 ≤ X ≤ 108), que pode ser ou não, um número perfeito.

Saída:
Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.
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
    for (int i = 1; i < n; i++) {
      if (n % i == 0)
        soma += i;
    }

    if (soma == n)
      cout << n << " eh perfeito" << endl;
    if (soma != n)
      cout << n << " nao eh perfeito" << endl;
  }

  return 0;
}