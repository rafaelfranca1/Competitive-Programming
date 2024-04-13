#include <iostream>
 
using namespace std;
 
int main() {
 
    double salario, imposto = 0;
    
    cin >> salario;
    
    if (salario <= 2000.00) {
        cout << "Isento\n";
    } else if (salario <= 3000.00) {
        imposto = (salario - 2000) * 0.08;
        printf("R$ %.2f\n", imposto);
    } else if (salario <= 4500.00) {
        imposto = 1000 * 0.08 + (salario - 3000) * 0.18;
        printf("R$ %.2f\n", imposto);
    } else {
        imposto = 1000 * 0.08 + 1500 * 0.18 + (salario - 4500) * 0.28;
        printf("R$ %.2f\n", imposto);
    }
 
    return 0;
}