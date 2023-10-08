#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
 
int main() {
    cout << fixed << setprecision(4);
    
    const double n = 3.14159;
    double area;
    
    double raio;
    cin >> raio;
    
    area = n * pow(raio,2);
    
    cout << "A=" << area << "\n";
 
    return 0;
}