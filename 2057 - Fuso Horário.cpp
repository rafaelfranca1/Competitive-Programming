#include <iostream>
 
using namespace std;
 
int main() {
 
    int s, t, f;
    
    cin >> s >> t >> f;
    
    int chegada = s + t + f;
    
    if(chegada >= 24) {
        chegada -= 24;
    } else if(chegada < 0) {
        chegada += 24;
    }
    
    cout << chegada << endl;
 
    return 0;
}