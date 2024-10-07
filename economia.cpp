#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int Q, soma1, soma0;
    int voto;
    cin >> Q;
    soma1=0;
    soma0=0;

    for(int i=0; i < Q; i++){
        cin >> voto;
        switch(voto){
            case 1:
            soma1++;
            break;
            case 0:
            soma0++;
            break;
        }
    }
    if(soma1 < soma0){
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
}