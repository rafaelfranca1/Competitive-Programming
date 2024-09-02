#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // Add this line

    long long n, i, carneirosNaoRoubados, estrelasAtacadas;
    cin >> n;

    vector<long long> x(n);
    vector<bool> atacada(n, false);

    carneirosNaoRoubados = estrelasAtacadas = 0;

    for (i = 0; i < n; i++) {
        cin >> x[i];
        carneirosNaoRoubados += x[i];
    }

    for (i = 0; i > -1 && i < n;) {
        atacada[i] = true;

        if (x[i]) {
            carneirosNaoRoubados--;
        }

        x[i]--;

        if (x[i] % 2) {
            i--;
        } else {
            i++;
        }
    }

    for (i = 0; i < n; i++) {
        estrelasAtacadas += atacada[i];
    }

    cout << estrelasAtacadas << " " << carneirosNaoRoubados << endl;

    return 0;
}