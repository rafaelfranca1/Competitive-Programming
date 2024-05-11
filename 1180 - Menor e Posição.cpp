#include <iostream>
#include <sstream>
 
using namespace std;
 
int main() {
 
    int n, menorValor, menorPosicao;
    cin >> n;
    cin.ignore();

    int x[n];

    string linha;
    getline(cin, linha);
    istringstream iss(linha);

    for (int i = 0; i < n; i++) {
        iss >> x[i];
    }

    menorValor = x[0];
    menorPosicao = 0;

    for (int i = 1; i < n; i++) {
        if (x[i] <= menorValor) {
            menorValor = x[i];
            menorPosicao = i;
        }
    }

    cout << "Menor valor: " << menorValor << endl;
    cout << "Posicao: " << menorPosicao << endl;
    
 
    return 0;
}