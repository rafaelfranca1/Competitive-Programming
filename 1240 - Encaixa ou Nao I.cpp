#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string a, b;

        cin >> a >> b;

        int k = 1;
        bool encaixa = true;
        for (int j = b.length() - 1; j > -1; j--) {
            if (b[j] != a[a.length() - k]) {
                encaixa = false;
                break;
            }

            k++;
        }

        if (encaixa) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
    }
 
    return 0;
}