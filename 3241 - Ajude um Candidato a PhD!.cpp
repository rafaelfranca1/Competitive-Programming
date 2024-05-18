#include <iostream>
#include <sstream> 
 
using namespace std;
 
int main() {
 
    int n;
    
    cin >> n;
    cin.ignore();
    
    for(int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);
        
        if(linha == "P=NP") {
            cout << "skipped\n";
        } else {
            int a, b;
            char operador;
            istringstream iss(linha);
            
            iss >> a >> operador >> b;
            
            cout << a + b << endl;
        }
    }
 
    return 0;
}