#include <iostream>
 
using namespace std;
 
int main() {
 
    int t, j = 0;
    int n[1000];

    cin >> t;

    for (int i = 0; i < 1000; i++) {
        if(j != t) {
            n[i] = j;
            j++;
        } else {
            j = 0;
            n[i] = j;
            j++;
        }
    }

    for (int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << n[i] << endl;
    }
 
    return 0;
}