#include <iostream>
 
using namespace std;
 
int main() {
 
    int h, m, s, h2, m2, s2, d1, d2;
    string lixo;
    
    cin >> lixo >> d1;
    cin >> h >> lixo >> m >> lixo >> s;
    cin >> lixo >> d2;
    cin >> h2 >> lixo >> m2 >> lixo >> s2;
    
    int inicio = (d1 * 24 * 3600) + (h * 3600) + (m * 60) + s;
    int fim = (d2 * 24 * 3600) + (h2 * 3600) + (m2 * 60) + s2;
    int duracao = fim - inicio;
    int w, x, y, z;
    
    w = duracao / (24 * 3600);
    x = (duracao % (24 * 3600)) / 3600;
    y = ((duracao % (24 * 3600)) % 3600) / 60;
    z = ((duracao % (24 * 3600)) % 3600) % 60;
    
    cout << w << " dia(s)\n";
    cout << x << " hora(s)\n";
    cout << y << " minuto(s)\n";
    cout << z << " segundo(s)\n";
 
    return 0;
}