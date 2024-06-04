#include <iostream>
 
using namespace std;
 
int main() {
 
    char letra;
    cin >> letra;

    double m[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    double soma = 0; 
    int cont = 0;

    int fim = 12;
    for (int i = 0; i < 5; i++) {
        fim--;
        for (int j = i + 1; j < fim; j++) {
            soma += m[i][j];
            cont++;
        }
    }

    double media = soma / cont;
    
    if (letra == 'S') {
        printf("%.1lf\n", soma);
    } else {
        printf("%.1lf\n", media);
    }
 
    return 0;
}