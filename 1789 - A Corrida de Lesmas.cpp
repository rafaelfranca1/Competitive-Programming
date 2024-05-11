#include <iostream>
#include <sstream>
 
using namespace std;
 
int main() {
 
    int l;

    while(cin >> l){
        cin.ignore();

        int v[l];

        string str;
        getline(cin, str);
        istringstream iss(str);
        int maisVeloz;

        for (int i = 0; i < l; i++) {
            iss >> v[i];

            if(i != 0) {
                if (v[i] >= maisVeloz) {
                    maisVeloz = v[i];
                }
            } else {
                maisVeloz = v[i];
            }
        }

        if (maisVeloz < 10) {
            cout << "1" << endl;
        } else if (maisVeloz >= 10 && maisVeloz < 20) {
            cout << "2" << endl;
        } else {
            cout << "3" << endl;
        }
    }
 
    return 0;
}