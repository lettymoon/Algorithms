#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int i = 2;
    for (; i < n; i++){
      if (n % i == 0) {
        cout << n << " nao eh primo" << endl;
        break;
      }
    }
    
    if (i >= n)
    cout << n << " eh primo" << endl;
  }
  
  return 0;
}