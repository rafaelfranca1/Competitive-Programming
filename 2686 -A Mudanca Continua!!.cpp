#include <iostream>
 
using namespace std;
 
int main() {
 
    double graus;

    while (cin >> graus) {
        if (graus < 90) {
            cout << "Bom Dia!!\n";
        } else if (graus < 180) {
            cout << "Boa Tarde!!\n";
        } else if (graus < 270) {
            cout << "Boa Noite!!\n";
        } else {
            cout << "De Madrugada!!\n";
        } 

        int totalSegundos = graus * 240;
        int horas = ((totalSegundos / 3600) + 6 ) % 24;
        int minutos = (totalSegundos % 3600) / 60;
        int segundos = (totalSegundos % 3600) % 60;

        printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    }
 
    return 0;
}