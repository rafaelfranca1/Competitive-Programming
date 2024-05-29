#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int derrotas = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string k;

        cin >> k;

        for (int i = 0; i < k.length() - 1; i++) {
            if (k[i] == 'C' && k[i + 1] == 'D') {
                derrotas++;
            }
        }
    }

    cout << n - derrotas << endl;

    return 0;
}