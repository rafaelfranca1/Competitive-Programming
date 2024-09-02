#include <iostream>
#include <vector>
#include <string>

using namespace std;

void conta_leds(string);

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string numero;
        cin >> numero;

        conta_leds(numero);
    }
}

void conta_leds(string num) {
    int total = 0;

    vector<pair<char, int>> info = {
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6},
        {'0', 6}
    };    

    for(int i = 0; i < (int) num.length(); i++) {
        char atual = num[i];

        for (pair<char, int> par : info) {
            if (atual == par.first) {
                total += par.second;
                break;
            }
        }
        
    }

    cout << total << " leds\n";
}