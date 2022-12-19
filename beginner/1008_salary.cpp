#include <iostream>
 
using namespace std;
 
int main() {
 
   double num, valor, hour;
   
   scanf("%d %lf %lf", &num, &valor, &hour);
   
   double salary = (double) (valor * hour);
   
   printf("NUMBER = %d\n", num);
   
   printf("SALARY = U$ %.2lf\n", salary);
   
    return 0;
}