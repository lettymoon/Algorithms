#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    scanf("%d", &t);
    
    int hora = t / 3600;
    int minuto = (t / 60) % 60;
    int segundos = t %60;
    
    printf("%d:%d:%d\n", hora, minuto, segundos);
 
    return 0;
}