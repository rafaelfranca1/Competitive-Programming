#include <iostream>
#include <sstream>
 
using namespace std;
 
int main() {
 
    int n;
    
    while (cin >> n) {
        cin.ignore();
        string linhaDeVotos;
        getline(cin, linhaDeVotos);
        
        istringstream iss(linhaDeVotos);
        
        int votos = 0;
        for(int i = 0; i < n; i++) {
            int voto;
            iss >> voto;
            
            if(voto == 1) {
                votos++;
            }
        }
        
        if(votos * 3 >= n * 2) {
            cout << "impeachment\n";
        } else {
            cout << "acusacao arquivada\n";
        }
    } 
 
    return 0;
}
