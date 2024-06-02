#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, sTentativas, bTentativas, aTentativas, sAcertos, bAcertos, aAcertos;
    sTentativas = bTentativas = aTentativas = sAcertos = bAcertos = aAcertos = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string nome;
        int s, b, a, s1, b1, a1;

        cin >> nome;
        cin >> s >> b >> a;
        cin >> s1 >> b1 >> a1;
        sTentativas += s;
        bTentativas += b;
        aTentativas += a;
        sAcertos += s1;
        bAcertos += b1;
        aAcertos += a1;
    }

    printf("Pontos de Saque: %.2f %%.\n", double (sAcertos * 100.0) / sTentativas);
    printf("Pontos de Bloqueio: %.2f %%.\n", double (bAcertos * 100.0) / bTentativas);
    printf("Pontos de Ataque: %.2f %%.\n", double (aAcertos * 100.0) / aTentativas);
 
    return 0;
}