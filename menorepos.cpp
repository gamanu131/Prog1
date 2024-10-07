#include <iostream>
using namespace std;

int main(){
    int n, aux, pos, i;
    cin >> n;
    int v[n];
    aux=1000;
    pos=1;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] < aux){
            aux = v[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << aux << endl;
    cout << "Posicao: " << pos << endl;
}