#include <iostream>
 
using namespace std;
 
int main() {
 
    string n;
    bool ehSorte = true;

    cin >> n;

    for (int i = 0; i < n.length() - 1; i++) {
        if (n[i] == '1' && n[i + 1] == '3') {
            ehSorte = false;
            break;
        }
    }

    ehSorte ? cout << n << " NO es de Mala Suerte\n" : cout << n << " es de Mala Suerte\n";
 
    return 0;
}