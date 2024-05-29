#include <iostream>
 
using namespace std;
 
int main() {
 
    double f1, f2;

    cin >> f1 >> f2;

    double resultado = ((((f1 / 100) + 1) * ((f2 / 100) + 1)) - 1) * 100;

    printf("%.6f\n", resultado);
 
    return 0;
}