#include <iostream>
 
using namespace std;
 
int main() {
 
    int b, g;

    cin >> b;
    cin >> g;

    if (b >= g / 2) {
        cout << "Amelia tem todas bolinhas!\n";
    } else {
        cout << "Faltam " << (g / 2) - b << " bolinha(s)\n";
    }
 
    return 0;
}