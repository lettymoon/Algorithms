#include <iostream>
 
using namespace std;

void bsort(int arr[], int n) {
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mostra(int arr[], int n) {
    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (arr[i] != arr[i - 1]) {
            cout << arr[i - 1] << " aparece " << count << " vez(es)" << endl;
            count = 1;
        } else {
            count++;
        }
    }
}

int main() {
 
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];
 
    bsort(arr, n);
    mostra(arr, n);

    return 0;
}