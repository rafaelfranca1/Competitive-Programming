#include <iostream>
 
using namespace std;

const string texto = "x = 35";

void topoEFundo() {
    for (int i = 0; i < 39; i++){
        cout << "-";
    } 

    cout << endl;
}

void linhaComTexto(int posicao) {
    for (int i = 0; i < 39; i++) {
        if (i == 0 || i == 38) {
            cout << '|';
        } else if (i == posicao) {
            cout << texto;
            i += (texto.length() - 1);
        } else {
            cout << ' ';
        }
    }

    cout << endl;
}

void linhaDeBorda() {
    for (int i = 0; i < 39; i++) {
        if (i == 0 || i == 38) {
            cout << '|';
        } else {
            cout << ' ';
        }
    }

    cout << endl;
}
 
int main() {

    topoEFundo();
    linhaComTexto(1);
    linhaDeBorda();
    linhaComTexto(16);
    linhaDeBorda();
    linhaComTexto(32);
    topoEFundo();
 
    return 0;
}