#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

int main() {
    string linha;
    while (getline(cin, linha)) {
        stringstream ss(linha);
        string palavra;
        int totalPalavras = 0, totalLetras = 0;
        bool palavraValida = true;
        while (ss >> palavra) {
            for (char c : palavra) {
                if (!isalpha(c) && c != '.') {
                    palavraValida = false;
                    break;
                }
            }
            if (palavraValida) {
                totalPalavras++;
                totalLetras += palavra.length() - (palavra.back() == '.' ? 1 : 0);
            }
            palavraValida = true;
        }
        if (totalPalavras == 0) {
            cout << 250 << endl;
        } else {
            int media = totalLetras / totalPalavras;
            if (media <= 3) {
                cout << 250 << endl;
            } else if (media == 4 || media == 5) {
                cout << 500 << endl;
            } else {
                cout << 1000 << endl;
            }
        }
    }
    return 0;
}