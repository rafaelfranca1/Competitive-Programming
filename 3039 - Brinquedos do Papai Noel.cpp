#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, carinhos, bonecas;
    carinhos = bonecas = 0;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string nome;
        char genero;

        cin >> nome >> genero;

        if (genero == 'F') {
            bonecas++;
        } else {
            carinhos++;
        }
    }
    
    cout << carinhos << " carrinhos" << endl;
    cout << bonecas << " bonecas" << endl;
 
    return 0;
}