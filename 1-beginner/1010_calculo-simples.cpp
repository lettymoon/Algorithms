#include <iostream>
 
using namespace std;
 
int main() {
 
    int codigo1, codigo2;
    int numb1, numb2;
    float valor1, valor2;

    scanf("%d %d %f", &codigo1,&numb1,&valor1);
    scanf("%d %d %f", &codigo2,&numb2,&valor2);
    
    float valor_final = (float) (valor1 * numb1) + (valor2 * numb2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", valor_final);
 
    return 0;
}