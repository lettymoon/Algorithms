#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int menor = 1001;
  int posmenor = 0;

  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
    if(menor > arr[i]){ 
      menor = arr[i];
      posmenor = i;
    }
  }
  
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posmenor);
  return 0;
}