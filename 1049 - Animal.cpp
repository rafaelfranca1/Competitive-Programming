#include <iostream>
 
using namespace std;
 
int main() {
 
    string coluna, tipo, alimentacao;
    
    cin >> coluna;
    cin >> tipo;
    cin >> alimentacao;
    
    if (coluna == "vertebrado") {
        if (tipo == "ave") {
            if (alimentacao == "carnivoro") {
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else {
            if (alimentacao == "onivoro") {
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {
        if (tipo == "inseto") {
            if (alimentacao == "hematofago") {
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if (alimentacao == "hematofago") {
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }
 
    return 0;
}