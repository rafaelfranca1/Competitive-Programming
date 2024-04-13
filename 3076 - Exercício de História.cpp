#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    
    while (cin >> n) {
        int seculo = n / 100 + 1;
        
        if (n % 100 == 0) {
            seculo--;
        }

        cout << seculo << endl; 
    }
 
    return 0;
}