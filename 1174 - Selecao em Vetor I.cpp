#include <iostream>
 
using namespace std;
 
int main() {
 
    double a[100];

    for (int i = 0; i < 100; i++) {
        cin >> a[i];

        if (a[i] <= 10.0) {
           printf("A[%d] = %.1lf\n", i, a[i]);
        }
    }
 
    return 0;
}