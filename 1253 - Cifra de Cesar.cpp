#include <iostream>
#include <vector>
#include <string>

using namespace std;

void codifica(string frase, int codigo);

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string frase;
        int codigo;

        cin >> frase;
        cin >> codigo;

        codifica(frase, codigo);
    }
}

void codifica(string frase, int codigo) {
    for(int i = 0; i < (int) frase.length(); i++) {
        frase[i] -= codigo;

        if (frase[i] < 'A') 
            frase[i] += 26; 
    }

    cout << frase << endl;
}