#include <iostream>

using namespace std; 

int main() {

    int tent = 0, d[60] = {0}, e[60] = {0}, pares = 0, numb = 0; char type; 
    while(cin >> tent) {
        while(tent--) {
            cin >> numb >> type;
            switch(type) {
                case 'D':
                    d[numb]++; 
                    break;
                case 'E':
                    e[numb]++;
            }
        }
        for(int i = 30; i <= 60; i++) {
            while(d[i] != 0 && e[i] != 0) {
                d[i]--;
                e[i]--;
                pares++;
            }
            d[i] = 0;
            e[i] = 0;
        }
        cout << pares << endl;
        pares = 0;
    }
    return 0;
}