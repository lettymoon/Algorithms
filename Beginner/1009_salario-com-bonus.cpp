#include <iostream>
 
using namespace std;
 
int main() {
 
    char name[500];
    double salary, totalSales;
    scanf("%s %lf %lf", name, &salary, &totalSales);
    
    double total = salary + (totalSales * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}