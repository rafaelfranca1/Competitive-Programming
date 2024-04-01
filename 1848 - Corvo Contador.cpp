#include <iostream>
 
using namespace std;
 
int main() {
 
    string corvo;
    int soma = 0;
    
    for(int i = 0; i < 3; i++) {
        while(1){
            getline(cin, corvo);
            
            if(corvo == "*--") {
                soma += 4;
            } else if (corvo == "-*-") {
                soma += 2;
            } else if (corvo == "--*") {
                soma += 1;
            } else if (corvo == "**-") {
                soma += 6;
            } else if (corvo == "***") {
                soma += 7;
            } else if (corvo == "-**") {
                soma += 3;
            } else if (corvo == "*-*") {
                soma += 5;
            } else if (corvo == "caw caw") {
                cout << soma << endl;
                soma = 0;
                break;
            }
        }
    }
 
    return 0;
}