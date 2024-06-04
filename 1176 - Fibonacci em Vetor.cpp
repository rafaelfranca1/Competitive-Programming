#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; 

        long long a = 0, b = 1;

        if (n != 0) {
            for (int j = 0; j < n - 1; j++) {
                long long aux = a + b;
                a = b;
                b = aux;
            }
        } else {
            b = 0;
        }

        cout << "Fib(" << n << ") = " << b << endl;
        
    }
 
    return 0;
}