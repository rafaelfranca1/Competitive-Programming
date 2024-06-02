#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int b;
        cin >> b;

        int aDabriel, dDabriel, lDabriel, valorGolpeDabriel, aGuarte, dGuarte, lGuarte, valorGolpeGuarte;
        cin >> aDabriel >> dDabriel >> lDabriel;
        cin >> aGuarte >> dGuarte >> lGuarte;

        valorGolpeDabriel = lDabriel % 2 == 0 ? ((aDabriel + dDabriel) / 2) + b : (aDabriel + dDabriel) / 2;
        valorGolpeGuarte = lGuarte % 2 == 0 ? ((aGuarte + dGuarte) / 2) + b : (aGuarte + dGuarte) / 2;

        if (valorGolpeDabriel > valorGolpeGuarte) {
            cout << "Dabriel\n";
        } else if (valorGolpeDabriel < valorGolpeGuarte) {
            cout << "Guarte\n";
        } else {
            cout << "Empate\n";
        }
    }
 
    return 0;
}